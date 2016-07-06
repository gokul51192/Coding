#include<iostream>
#include<unistd.h>
using namespace std;
class abc
{
	public:
		int a;	
		abc()
		{	

			cout<<"\n  constructor called";
		}
		abc(const  abc & rhs)
		{
			cout<<"\n copy constructor called";
		}
		void operator=(const abc & rhs)
		{
			cout<<"\nassignment overload operator called";
		}
};

abc value_return()
{
	cout<<"\n inside function";
	sleep(100);
	return abc();
}
int  main()
{
	abc a1;
	a1 = value_return();
	//abc a2 = a1;
}

