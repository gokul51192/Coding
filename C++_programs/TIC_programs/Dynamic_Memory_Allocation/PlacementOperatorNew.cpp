#include <cstddef> // Size_t
#include <iostream>
using namespace std;
class X {
	public:
	int i;
	X()
	{
	}		
	X(int ii) : i(ii) {
		cout << "this = " << this << endl;
	}
	~X() {
		cout << "X::~X(): " << this << endl;
	}
	void* operator new(size_t, void* loc) {
		return loc;
	}
};
int main() {
	int l[10];
	for(int i = 0;i<10;i++)
	{
		if(i>0)
			l[i] = l[i-1]+(i*i);
		else
			l[i] = 10;
	}
	l[0] = 23;
	cout << "l = " << l << endl;
	X* xp = new(l) X; // X at location l
	for(int i=0;i<10;i++)
	{
				
		cout<<"\n i value :"<<xp->i<<endl;
		xp++;
	}
	xp->X::~X(); // Explicit destructor call
	// ONLY use with placement!
} ///:~
