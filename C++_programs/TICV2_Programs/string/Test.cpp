#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[]) {
  string s1[] = { "ABC","BAC"};
  int l_temp;
  for(int i = 1;(l_temp=i*2)<=10;i++)
    cout<<"\n"<<l_temp;
    string s2("ABCXYZ");
  signed int temp =  s2.find_last_not_of("ABC");
  cout<<"\n Position :"<<temp;
  cout<<"\n s1 and s2 capacity["<<s1[0].capacity()<<"]["<<s1[1].capacity()<<"]";
  cout<<"\n sizeof s1 \t"<<sizeof s1 <<" sizeof *s1\t"<<sizeof *s1;
  s1[0].reserve(500);
  cout<<"\n s1 and s2 capacity["<<s1[0].capacity()<<"]["<<s1[1].capacity()<<"]";
  cout<<"\n sizeof s1 \t"<<sizeof s1 <<" sizeof *s1\t"<<sizeof *s1;
  int a[10];
  cout<<"\n arrary size"<<sizeof(a[0]);
  return 0;
}
