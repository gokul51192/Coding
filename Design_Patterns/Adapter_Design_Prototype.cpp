#include<iostream>
using namespace std;
class Adaptee
{
	public:
		void Specific_Request()
		{
			cout<<"\nAdaptee::Specific Request called\n";
		}
};
class Target // Adapter class
{
	public:
		virtual	void Request() = 0;
};
class Adapter : public Target , public Adaptee
{
	public:
		void Request()
		{

			cout<<"\nAdapter::Request called\n";
			Specific_Request();
		}
};
int main()
{
	Target *t1 = new Adapter();
	t1->Request();
	return 0;
}
