#include<iostream>
using namespace std;
class X {
	int i;
	public:
	X();
	X(int ii );
	void modify();
	~X() { cout<<"\n Destructor called\n"; }
};
X::X()
{
	cout<<"\n Constructor invoked";	
}
X::X(int ii) { cout <<"\nparameterized constructor called\n"; i = ii; }
void X::modify() { i++; }
X f5() {
	return X(1);
}
const X f6() {
	return X();
}
void f7(X& x) { // Pass by non-const reference
	x.modify();
}
int main() {
	{
		f5() = X(1); // OK -- non-const return value
		cout<<"breakpoint";
		X().modify();
		cout<<"breakpoint";
		f5().modify(); // OK
	}
	// Causes compile-time errors:
	//! f7(&f5());
	//! f6() = X(1);
	//! f6().modify();
	//! f7(f6());
} ///:~
