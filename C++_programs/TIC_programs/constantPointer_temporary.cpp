#include<iostream>
using namespace std;
class X
{
static const int a = 10 ;
public:
	X() { cout<<"\nconstructor called\n"; }
	~X() { cout<<"\ndestrctor called\n"; }
};
void g(const X obj)
{
	cout<<"\n inside global function\n";
}
int main()
{
	g(X());
	return 0;
}
