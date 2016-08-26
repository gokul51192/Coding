#include<iostream>
#include<stdio.h>
#include<exception>
using namespace std;
int main()
{
	int a;
	a =10;
	try
	{
		throw(1);
		a= a/0;
		
		printf("\n\n%s",a);
	}
	catch(int e)
	{
		printf("Exception caught");
	}
	return 0;
}
