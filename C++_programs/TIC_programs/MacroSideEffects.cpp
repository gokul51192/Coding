#include <fstream>
#include<iostream>
using namespace std;
#define BAND(x) (((x)>5 && (x)<10) ? (x) : 0)
int main () {
	ofstream out("macro.out");
	for(int i = 4; i < 11; i++) {
		int a = i;
		out << "\n initial value of a = " << a << endl << '\t';
		out << "BAND(++a)=" << BAND(++a) << endl;
		out << "\t After execution a = " << a << endl;
	}
	return 0;
}
