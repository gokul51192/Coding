#include <iostream>
using namespace std;
class NoVirtual {
	int a;
	public:
	void x() const {}
	int i() const { return 1; }
};
class OneVirtual {
	public:
	virtual void x() const {}
};
class TwoVirtuals {
	int a;
	public:
	virtual void x() const {}
	virtual int i() const { return 1; }
};
class derived :public OneVirtual
{
public:
	virtual void x() const { }
};

int main() {
	cout << "int: " << sizeof(int) << endl;
	cout << "NoVirtual: "
		<< sizeof(NoVirtual) << endl;
	cout << "void* : " << sizeof(void*) << endl;
	cout << "OneVirtual: "
		<< sizeof(OneVirtual) << endl;
	cout << "TwoVirtuals: "
		<< sizeof(TwoVirtuals) << endl;	
	cout << "Derived: "
		<< sizeof(derived) << endl;
}
