#include<iostream>
using namespace std;
class Fi {};
class Fee {
	public:
		Fee(int) {}
		Fee(const Fi&) {}
};
class Fo {
	int i;
	public:
	Fo(int x = 0) : i(x) {}
	operator Fee() const { 
	cout<<"\nOperator overloading function called FUNCTION NAME:["<<__FUNCTION__<<"]"<<endl;
	return Fee(i); 
	}
};
int main() {
	Fo fo;
	Fee fee = fo;
} ///:~
