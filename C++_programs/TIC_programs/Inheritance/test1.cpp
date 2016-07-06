#include<iostream>
using namespace std;
class Base
{
	public:
	Base()
{

			cout<<"Base class Constructor called";
}
		int a;
};
class Derived : public Base
{
	public:
		Derived()
		{
			cout<<"Derived class Constructor called";
		}
		int a1;
};
int main()
{
	Derived d1;
	d1.a =10;
	d1.a1 = 11;
	return 0;
}
