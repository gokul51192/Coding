#include<iostream>
using namespace std;
class student
{
	public:
		int m_student_no;
		/*student(int i)
		{
			m_student_no = i;
		}*/

};
void calc()
{
	static student s1;
	cout<<"\n student roll no"<<s1.m_student_no;
}
int main()
{
	calc();	
	return 0;
}
