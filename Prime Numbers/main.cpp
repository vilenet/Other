/************************************************************
 version 0.1 (without oop, error handling, unit testin);
/************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <regex>
#include <vector>
#include <utility>
#include <thread>
#include <mutex>
#include <pthread.h>
#include <set>
using namespace std;

//------------------------------------------------------
// The function writes the result to an XML file
void createXmlFile(set<int> &out){
  ofstream outFile("output.xml");
  outFile << "\<root\>\n   \<primes\>";
  for(auto elem: out)
    outFile << elem << " ";
  outFile << "<\/primes\>\n\<\/root\>\n";

  outFile.close();
  cout << "\nPrime Numbers stored in output.XML";
}

//----------------------------------------------------------------
// function to convert string to int
int stoi(string str){
   int n;
   istringstream ist(str);
    ist >> n;
    return n;
}

//----------------------------------------------------------------
void parser(string page, vector<pair<int,int> > &v)
{
  // regular expression \ pattern used to search the range
  regex intervalPattern("(<\\s*low\\s*>\\s*\\d*\\s*<\\s*/low\\s*>\\s*<\\s*high\\s*>\\s*\\d*\\s*<\\s*/high\\s*>)");

  sregex_iterator interval_iterator(page.cbegin(), page.cend(), intervalPattern);

  // If the iterator contains the search pattern incrementing iterator and move on to the next pattern
    for(; interval_iterator != sregex_iterator(); ++interval_iterator )
    {
      // Save the string pointed to by an iterator in a substring
      string sub_str = (*interval_iterator)[1];

      int first, second;

      // patterns for finding numbers between the required tags
      regex reg("<\\s*low\\s*>(\\s*\\d*\\s*)<\\s*/low\\s*>");
      regex reg2("<\\s*high\\s*>(\\s*\\d*\\s*)<\\s*/high\\s*>");

      // create iterators initialized patterns
      sregex_iterator it(sub_str.cbegin(), sub_str.cend(), reg);
      sregex_iterator it2(sub_str.cbegin(), sub_str.cend(), reg2);

      // If the iterator "it" points to a string containing the figures between tags
      for(; it != sregex_iterator(); ++it, ++it2 ){

        // assign a temporary variable, the value of the iterator
        first = stoi( (*it)[1] );

        // If the iterator is pointing at it2 string contains numbers between tag - <high>100</high>,
        // and if the first value (first) the range is less than the second.
        if( it2 != sregex_iterator() && first < stoi( (*it2)[1] )){
          // assign a temporary variable of the second, the second value range
          second = stoi( (*it2)[1] );

          // insert into the vector found range
          v.push_back( make_pair(first, second));
        }
        else
           break;
      }
    }
  }
 //--------------------------------------------------------------

 // a function that finds prime numbers
void primeNumbers (set<int> &out, mutex& m_arr, mutex& m_out, int low, int high)
{
     int i, flag;
     cout << "\nPrime numbers between " << low << " and " << high << ":" << endl;
     while (low < high){
       flag = 0;

       for(i = 2; i <= low/2; ++i){
        if(low % i == 0){
          flag = 1;
          break;
        }
       }

       if (flag == 0){
         cout << low << " ";
         out.insert(low);
       }

       ++low;
     }

     cout << endl;
}

//----------------------------------------------------------------
int main()
{
   string str;
   ifstream InFile("test.xml");
   while (!InFile.eof())
     str  += InFile.get();

   InFile.close();

   vector<pair<int,int> > v;
   set<int> out;
   parser(str, v);
   thread::id id;
   mutex m_arr, m_out;

   if(!v.empty()){
     for(int i = 0; i < v.size(); ++i){
       cout << i+1 << " range: " << v[i].first << " - " << v[i].second << endl;
     }
     cout << endl;

     //--THREADS-----------------------------
     thread thread_arr[v.size()];
     for(int i = 0; i < v.size(); ++i){
       thread_arr[i] = thread(primeNumbers, ref(out),
                              ref(m_arr), ref(m_out),
                              v[i].first, v[i].second );
       id = thread_arr[i].get_id();
       thread_arr[i].join();
       cout << i+1 << " Thread with id " << id << " finished.\n";
     }
     //-------------------------------------------

     cout << "\nthe numbers that will be saved in the xml file\n";
     for(auto elem : out)
       cout << elem << "  ";

     createXmlFile(out);
   }
   else
     cout << "Interval not found!\n";


   cin.get();
}






