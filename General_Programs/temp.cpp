#include<iostream>
using namespace std;
class student
{
	public:
		int * m_ptr_n;
		student()
		{
			cout<<"Constructor invoked for student object";
			m_ptr_n = NULL;
			m_ptr_n =  new int;
			*m_ptr_n = 10;
		}
		void print_value();
		~student()
		{	
			cout<<"Destructor invoked for student object";
			if(m_ptr_n != NULL)
				delete m_ptr_n;
		}
};
void student::print_value()
{
	cout<<"\nThe value holded by Class Level Pointer["<<*m_ptr_n<<"]\n";
}
int main()
{
	int l_is_local_object_created = 0;
ROOT:
	student s1;
	s1.print_value();
	if(l_is_local_object_created == 0)
	{	
		l_is_local_object_created = 1;
		goto ROOT;
	}
	return 0;
}
