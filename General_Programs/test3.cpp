#include<iostream>
using namespace std;
class student
{
	public:
		static int m_school_id;
};
int student::m_school_id;
int main()
{
	cout<<"inside main"<<student::m_school_id;
}
