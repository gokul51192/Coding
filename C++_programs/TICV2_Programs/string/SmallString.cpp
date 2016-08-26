//: C01:SmallString.cpp
#include<iostream>
#include <string>
using namespace std;
int main() {
string imBlank;
string heyMom("Where are my socks?");
string standardReply = "Beamed into deep "
"space on wide angle dispersion?";
string useThisOneAgain(standardReply);
//string l_temp_s = 'a'; we cannot assign a character value for string object by assignment and by copy constructor
//cout<<endl<<l_temp_s<<endl;
cout<<endl<<standardReply<<endl;
} ///:~
