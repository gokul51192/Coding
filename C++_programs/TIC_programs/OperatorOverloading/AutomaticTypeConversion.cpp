#include "../require.h"
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
class Stringc {
	string s;
	public:
	Stringc(const string& str = "") : s(str) {}
	operator const char*() const {
		cout<<"operator overloading function called\taddress["<<this<<"]\n";
		return s.c_str();
	}
};
int main() {
	Stringc s1("hello"), s2("there");
	strcmp(s1, s2); // Standard C function
	strspn(s1, s2); // Any string function!
} ///:~
