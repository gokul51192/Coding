#include<iostream>
using namespace std;
int & calc(int & a , int & b,int * result)
{
	*result = a+b;
	return *result;	
}
int main()
{
	int a,b,result;
	a = 5;
	b = 8;
	int &c= calc(a,b,&result);
	cout<<c<<"\n";
	return 0 ;
}
