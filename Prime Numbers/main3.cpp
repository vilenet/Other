#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <regex>
#include <vector>
#include <utility>
#include <set>
#include <thread>
using namespace std;

// ��������������� ������ ��� ������������� ������(string) � �����(int)
int stoi(string str){
   int n;
   istringstream ist(str);
   ist >> n;
   return n;
}

///////////////////////////////////////////////////////////////////////
class PrimeNum{
public:
  vector<pair<int,int> > ranges;
  static set<int> outSet;
  string page;

public:
  PrimeNum(){}
  PrimeNum(string FileName);
  static void calcPrimeNum(int, int);
  void setXML(string fileName);
  void createXML();
  void parser();
  void run();
};

set<int> PrimeNum::outSet;
//-----------------------------------------------------------
PrimeNum::PrimeNum(string fileName){
  setXML(fileName);
}

//-------------------------------------------------------------
void PrimeNum::setXML(string fileName){
 ifstream InFile(fileName);
 while (!InFile.eof())
   page  += InFile.get();
 InFile.close();
}
//----------------------------------------------------------------
void PrimeNum::parser(){
  // ��������� ���������\������� �� ������ ���������
  regex intervalPattern("(<\\s*low\\s*>\\s*\\d*\\s*<\\s*/low\\s*>\\s*<\\s*high\\s*>\\s*\\d*\\s*<\\s*/high\\s*>)");

  sregex_iterator interval_iterator(page.cbegin(), page.cend(), intervalPattern);

  // ���� �������� �������� ������� ������� - ���������������� �������� � ������� �� ��������� �������
  for(; interval_iterator != sregex_iterator(); ++interval_iterator )
  {
    // ��������� ������ �� ������� ��������� �������� � ���������
    string sub_str = (*interval_iterator)[1];

    int first, second;

    // �������� ��� ������ ��������(����) ����� ������������ ������ (<low>1234</low> � <high>1234</high>)
    regex reg("<\\s*low\\s*>(\\s*\\d*\\s*)<\\s*/low\\s*>");
    regex reg2("<\\s*high\\s*>(\\s*\\d*\\s*)<\\s*/high\\s*>");

    // ������� ��������� ������������������ ����������
    sregex_iterator it(sub_str.cbegin(), sub_str.cend(), reg);
    sregex_iterator it2(sub_str.cbegin(), sub_str.cend(), reg2);

    // ���� �������� it ��������� �� ������ ���������� ����� ����� ����� - <low>100</low>,
    for(; it != sregex_iterator(); ++it, ++it2 ){

      // ����������� ��������� ���������� first �������� ���������
      first = stoi( (*it)[1] );

      // ���� �������� it2 ��������� �� ������ ���������� ����� ����� ����� - <high>100</high>,
      // � ���� ������ ��������(first) ��������� ������ ��� ������.
      if( it2 != sregex_iterator() && first < stoi( (*it2)[1] )){
        // ����������� ��������� ���������� second ������ �������� ���������
        second = stoi( (*it2)[1] );

        // ��������� � ������ ��������� ��������
        ranges.push_back( make_pair(first, second));
      }
      else
        break;
    }
  }
}

//--------------------------------------------------------------------
// ������� ����������� primr numbers
void PrimeNum::calcPrimeNum(int low, int high){

  while (low < high){
    int flag = 0;

    for(int i = 2; i <= low/2; ++i){
      if(low % i == 0){
        flag = 1;
        break;
      }
    }

    if (flag == 0){
      outSet.insert(low);
    }
    ++low;
  }
}

//--------------------------------------------------------------------
void PrimeNum::run(){

  parser();

  if(!ranges.empty()){

    thread thread_arr[ranges.size()];

    for(int i = 0; i < ranges.size(); ++i){
      //thread_arr[i] = thread(calcPrimeNum);
      thread_arr[i] = thread(calcPrimeNum, ranges[i].first, ranges[i].second);
      thread_arr[i].join();
    }

     cout << "Done!\n";
     createXML();
   }
   else
     cout << "Interval not found!\n";

}

//-----------------------------------------------------
// ������ ����������� ��������� � XML ����
void PrimeNum::createXML(){

  ofstream outFile("output.xml");
  outFile << "\<root\>\n   \<primes\>";
  for(auto elem: outSet)
    outFile << elem << " ";
  outFile << "<\/primes\>\n\<\/root\>\n";

  outFile.close();
  cout << "\nPrime Numbers stored in output.XML";
}

///////////////////////////////////////////////////////////////////////
//-----------------------------------------------------
int main()
{

  PrimeNum pNum("test.XML");
  pNum.run();

  cin.get();
}
