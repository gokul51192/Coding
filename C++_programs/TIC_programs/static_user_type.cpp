#include<iostream>
using namespace std;
class student
{
	static student s1;
	student(int p_Student_RollNo):m_student_rollNo(p_Student_RollNo){ };
	public:
	int m_student_rollNo;
	static student * getInstanceoftheClass(){ return &s1; }
};
student student::s1(100);
int main()
{
	student::getInstanceoftheClass()->m_student_rollNo = 0;
	cout<<endl<<student::getInstanceoftheClass()->m_student_rollNo;	
	return 0;
}
