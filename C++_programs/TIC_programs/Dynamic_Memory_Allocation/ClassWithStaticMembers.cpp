#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
class student{
	public:
		static int school_id;
		static string school_name;
		int m_student_roll_no;
};
int student::school_id = 10;
string student::school_name = "KGBHSS";
int main()
{
	student s1;
	printf("\n sizeof student class:[%d]",sizeof(s1));
	cout<<"\n School Name"<<student::school_name<<endl<<"School ID"<<student::school_id;
	return 0;
}
