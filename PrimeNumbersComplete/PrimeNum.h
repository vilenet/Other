#include <iostream>
#include <fstream>
#include <utility>
#include <string>
#include <vector>
#include <thread>
#include <regex>
#include <set>

using namespace std;


class PrimeNum{
private:
  vector<pair<int,int> > ranges;         // for ranges
  static set<int> outSet;                // to store the result
  string page;                           // will contain an xml file
  thread::id id;                         // id threads

public:
  PrimeNum(){}
  PrimeNum(string FileName);
  static void calcPrimeNum( int, int);  // function finds the prime numbers
  void createXML();                     // function creates an xml file and writes the result into it
  void parser();                        // function finds the range of numbers, and writes them to the "ranges"
  void run();                           // function runs other class functions
  void getXML(string);                  // function receives the XML file and stores it in the "page"
  bool pageExists();                    // function checks whether the page exists
};



