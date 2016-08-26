#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1 = "!win";
	string s2 = s1;
	cout<<"\nstring s1\t"<<s1<<"\tstring s2\t"<<s2;
	string::iterator it1 = s1.begin();
	*it1 = '8';
	cout<<"\nstring s1\t"<<s1<<"\tstring s2\t"<<s2;
	string standardReply = "Beamed into deep "
		"space on wide angle dispersion?";
	cout<<"\n"<<standardReply;
	return 0;
}
