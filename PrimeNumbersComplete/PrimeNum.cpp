#include "PrimeNum.h"

// function to convert string to int
/*int stoi(string str){
   int n;
   istringstream ist(str);
   ist >> n;
   return n;
}*/
//---------------------------------------------------------------
set<int> PrimeNum::outSet;

//---------------------------------------------------------------
PrimeNum::PrimeNum(string fileName){
  getXML(fileName);
}

//----------------------------------------------------------------
void PrimeNum::parser(){
  // regular expression \ pattern used to search the range
  regex intervalPattern("(<\\s*low\\s*>\\s*\\d*\\s*<\\s*/low\\s*>\\s*<\\s*high\\s*>\\s*\\d*\\s*<\\s*/high\\s*>)");

  sregex_iterator interval_iterator(page.cbegin(), page.cend(), intervalPattern);

  // If the iterator contains the search pattern, incrementing iterator and move on to the next pattern
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
        ranges.push_back( make_pair(first, second));
      }
      else
        break;
    }
  }
}

//--------------------------------------------------------------------
// function that finds prime numbers
void PrimeNum::calcPrimeNum(int low, int high){

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
    outSet.insert(low);
    }
    ++low;
  }
    cout << endl;
}

//--------------------------------------------------------------------
// The function writes the result to an XML file
void PrimeNum::createXML(){

  ofstream outFile("output.xml");
  outFile << "\<root\>\n   \<primes\>";
  for(auto elem: outSet)
    outFile << elem << " ";
  outFile << "<\/primes\>\n\<\/root\>\n";

  outFile.close();
  cout << "\nPrime Numbers stored in output.XML\n";
}

//-------------------------------------------------------------------
// Получить файл и сохранить его в строку
void PrimeNum::getXML(string fileName){
  ifstream InFile(fileName);
   while (!InFile.eof())
     page  += InFile.get();
   InFile.close();
}

//--------------------------------------------------------------------
void PrimeNum::run(){

  parser();

  if(!ranges.empty()){
    for(int i = 0; i < ranges.size(); ++i){
      cout << i+1 << " range: " << ranges[i].first << " - " << ranges[i].second << endl;
    }
    cout << endl;

    //-- call the method calcPrimeNum on separate threads ---
    thread thread_arr[ranges.size()];

    for(int i = 0; i < ranges.size(); ++i){

      thread_arr[i] = thread(calcPrimeNum, ranges[i].first, ranges[i].second);

      id = thread_arr[i].get_id();
      thread_arr[i].join();
      cout << i+1 << " Thread with id " << id << " finished.\n";
    }
    //---------------------------------------------------

    createXML();
   }
   else
     cout << "Interval not found!\n";

}

// checks whether the page exists
bool PrimeNum::pageExists(){
  if(!page.empty()){
    return true;
  }
  else{
    cout << "page is not loaded!\n";
    return false;
  }
}
