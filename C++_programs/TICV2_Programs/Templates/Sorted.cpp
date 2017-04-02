//: C03:Sorted.cpp
// Testing template specialization
#include "Sorted.h"
#include "arraySize.h"
#include <iostream>
#include <string>
using namespace std;
char* words[] = {
  "is", "running", "big", "dog", "a",
};
char* words2[] = {
  "this", "that", "theother",
};
int main() {
  Sorted<int> is;
  int a[] = {1233,2323,11,23223,32,2323,32342,23,43344,322,2,234343,2323,233,322};
  for(int i = 0; i < 15; i++)
  is.push_back(a[i]);
  for(int l = 0; l < is.size(); l++)
  cout << is[l] << ' ';
    Chapter 15: Multiple Inheritance
  cout << endl;
  is.sort();
  for(int l = 0; l < is.size(); l++)
    cout << is[l] << ' ';
  cout << endl;
  // Uses the template partial specialization:
  Sorted<string*> ss;
  for(int i = 0; i < asz(words); i++)
    ss.push_back(new string(words[i]));
  for(int i = 0; i < ss.size(); i++)
    cout << *ss[i] << ' ';
  cout << endl;
  ss.sort();
  for(int i = 0; i < ss.size(); i++)
    cout << *ss[i] << ' ';
  cout << endl;
  // Uses the full char* specialization:
  Sorted<char*> scp;
  for(int i = 0; i < asz(words2); i++)
    scp.push_back(words2[i]);
  for(int i = 0; i < scp.size(); i++)
    cout << scp[i] << ' ';
  cout << endl;
  scp.sort();
  for(int i = 0; i < scp.size(); i++)
    cout << scp[i] << ' ';
  cout << endl;
} ///:~
