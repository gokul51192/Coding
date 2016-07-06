#ifndef USEFUL_H
#define USEFUL_H
#include<iostream>
using namespace std;
class X {
	int i;
	public:
	X() { i = 0; cout<<"X class constructor called"; }
	void set(int ii) { i = ii; }
	int read() const { return i; }
	int permute() { return i = i * 47; }
};
#endif // USEFUL_H ///:~
