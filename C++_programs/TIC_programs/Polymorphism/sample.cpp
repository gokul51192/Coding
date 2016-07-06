#include<iostream>
using namespace std;
class PersonalInfo
{
	public:
		int m_RollNo_n = 5;
		string m_name_s;
		string m_permanent_address_s;
		string m_present_address_s;
		virtual void print_info();
};
class student:public PersonalInfo
{
	public:
		int m_RollNo_n = 6;
		string m_name_s;
		int m_grade_n =1;
		void print_info();
};
void PersonalInfo::print_info()
{
	cout<<"\n Inside PersonalInfo function, Name:"<<m_name_s<<"\t"<<m_RollNo_n;
	return;
}
void student::print_info()
{
	cout<<"\n Inside student function, Name:"<<m_name_s<<"\t"<<m_RollNo_n;
	return;
}
int main()
{
	PersonalInfo *p1 = new student();
	p1->print_info();
	cout<<"Function name:"<<__FUNCTION__<<"\t Roll NO:"<<p1->m_RollNo_n;
	//cout<<p1->m_grade_n; you can't use an derived class member variable using base class pointer;
	//PersonalInfo p2 = new student(); this is not an upcasting
	return 0;
}
