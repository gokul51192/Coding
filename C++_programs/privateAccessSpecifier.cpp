#include<stdio.h>
#include<iostream>
using namespace std;
class student
{
	private:
		int student_id;
	public:
		void set_student_id(int p_student_id) {student_id = p_student_id; }
		int  get_student_id(){return student_id; }
};
int main()
{
	student s1;
	s1.set_student_id(5);
	cout<<"\nstudent id:"<<s1.get_student_id();
	return 0;
}
