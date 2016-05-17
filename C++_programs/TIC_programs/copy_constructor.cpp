#include<iostream>
#include<string.h>
using namespace std;

class student
{
	public:	
		int m_student_rollno;
		string m_student_name_s;
		student() {cout << "\nConstructor called\n"; }		
		student(const student & p_source_obj) {cout<< "\nUser copy constructor called\n"; 
			m_student_rollno = p_source_obj.m_student_rollno;
			m_student_name_s = p_source_obj.m_student_name_s; }
};
void printStudentInformation(const student & p_obj)
{
	cout<<"\n Student Name:"<<p_obj.m_student_name_s;
	cout<<"\n Student RollNo:"<<p_obj.m_student_rollno;
	return;
}
int main()
{
	student s1;
	s1.m_student_rollno = 223622;
	s1.m_student_name_s = "Gokulnath T";
	student s2 = s1;
	student s4;
	s4 = s1;
	printStudentInformation(s2);
	printStudentInformation(s4);
	return 0;	
}
