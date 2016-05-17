#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	const int b[]= { 1,2,3,4};
	const int a = 1;
	int b1 = b[2];
	float f1[b[3]];
	cout<<"\n sizeof the single array"<<sizeof(f1)/sizeof(f1[0])<<endl;
	cout<<endl<<&a;
	return 0;
}
