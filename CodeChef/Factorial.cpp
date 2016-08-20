#include<stdio.h>
#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n > 1)
      n = n * factorial(n-1);
    return n;
}
int main()
{
  int l_fact_num;
  cin>>l_fact_num;
  printf("\nFactorial Value[%d]",factorial(l_fact_num));
  return 0;
}
