#include<iostream>
#include<string>
using namespace std;
class student
{
	public:	
		int m_rollno;
	private:
		string personal_address;
};
class studentinfo:public student
{
	public:
		int m_grade[150];
	void print_address()
	{
		//cout<<"Personal address"<<personal_address;
		cout<<"RollNo"<<m_rollno;
	}
};
int main()
{
	studentinfo s1;
	s1.m_rollno= 100;
	return 0;
}

