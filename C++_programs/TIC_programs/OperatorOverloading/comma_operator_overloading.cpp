#include<stdio.h>
#include<string.h>
class student
{
	int m_student_roll_no;
	public:
		student()
		{
			printf("\n default constructor called \n");
			m_student_roll_no = 0;
			print_Student_Data();
		}
		student(int p_student_no):m_student_roll_no(p_student_no){ }
		void print_Student_Data() {printf("\nStudent Roll No:[%d] ",m_student_roll_no); } 
		const student & operator,(const student & rhs)
		{
			printf("\n , operator overloaded function called");
			this->m_student_roll_no = rhs.m_student_roll_no;
			return *this;
		}
};
int main()
{
	student s1,s2(10);
	s1,s2;
	s1.print_Student_Data();
	s2.print_Student_Data();
	return 0;
}
