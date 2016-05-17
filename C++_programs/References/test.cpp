#include<iostream>
using namespace std;
int& g(int& x) {
int l_temp_n;
x++; // Same effect as in f()
x = l_temp_n;
return x; // Safe, outside this scope
}
int main()
{
int a =12;
cout<<"\n"<<g(a);
return 0;
}
