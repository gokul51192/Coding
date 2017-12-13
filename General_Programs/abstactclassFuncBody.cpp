#include<iostream>
using namespace std;
class A
{
	protected:
		A()
		{
		
		}
		virtual void print();
};
class B:public A
{
	void print()
	{
		cout<<"\n"<<"I am from B class";
	}
};
void A::print()
{
	cout<<"I am from Class A";
}
int main()
{
	B a;
	//A a1;	
	return 0;
}
