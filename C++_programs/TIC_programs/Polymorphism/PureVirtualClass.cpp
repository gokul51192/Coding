#include<iostream>
using namespace std;
class shape
{
	public:
		virtual void getshape() = 0;
		virtual void printshape()
		{
			cout<<"shape is called in base class";
		}
};
class square :public shape
{
	public:
		void print_square_length();
		void getshape();
};
void square::print_square_length()
{
	cout<<"\n inside square length function";
}
void square::getshape()
{
	cout<<"\n inside getshape function";
}
int main()
{
	square s1;
	s1.print_square_length();
	s1.getshape();
	s1.printshape();
	return 0;
}

