#include<iostream>
using namespace std;
class student{
	public:
		virtual void print();
};
int main()
{

	student s1;
	cout<<"\n sizeof student object:"<<sizeof(s1)<<endl;
	s1.print();
	return 0;
}
void student::print()
{
	cout<<"hello c program";
}
