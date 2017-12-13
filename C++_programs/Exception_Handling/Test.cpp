#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	try
	{
		cout<<"Inside try block \n";
		throw 2;
	}	
	catch(int a)
	{
		cout<<"Inside catch block \n"<< a;
	}
	cout<<"\n After catch block \n";
	return 0;
}
