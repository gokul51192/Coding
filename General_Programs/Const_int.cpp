#include<iostream>
using namespace std;
int main()
{
	int a =10;
	int b =4;
	int const * const p  = &a;
	p = &b;	
	return 0;
}
