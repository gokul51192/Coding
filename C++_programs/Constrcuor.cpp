#include<iostream>
using namespace std;
class student
{
	int student_id;
	public:
	student() {cout <<"constrcutor invoked"; }
};
int main()
{
	student s1;		
	return 0;
}
