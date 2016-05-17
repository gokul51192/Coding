#include<iostream>
using namespace std;
#define TRACE(s) cerr << #s << endl<<s;
int  f(int i)
{
	return i++;	
}
int main()
{
	for(int i = 0; i < 100; i++)
		TRACE(f(i));
	return 0;	
}
