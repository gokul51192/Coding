//: C02:Strmove.cpp
// ostrstream memory movement
#include <iostream>
#include <strstream>
using namespace std;
int main() {
ostrstream s;
s << "hi";
char* old = s.str(); // Freezes s
s.rdbuf()->freeze(0); // Unfreeze
for(int i = 0; i < 100; i++)
s << "howdy"; // Should force reallocation
cout << "old = " << (void*)old << endl;
cout << "new = " << (void*)s.str(); // Freezes
flush(std::cout);
delete s.str(); // Release storage
int a = 11;
cout.setf(ios::showpos);
cout.setf(ios::hex,ios::basefield);
cout<<endl;
cout.width(40);
cout.fill('*');
cout<<"Integer value:"<<a<<endl;
cout.width(40);
cout.fill('*');
cout.width(40);
} ///:~
