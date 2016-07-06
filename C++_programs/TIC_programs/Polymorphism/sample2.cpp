#include<iostream>
using namespace std;
class student
{
	public:
		int a;
		virtual void print_data()
		{
			cout<<"\n hello you are in virtual function";
		}
};
int main()
{
	student s1;
	s1.print_data();
	return 0;
}

