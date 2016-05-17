#include<iostream>
using namespace std;
class Three {
	int i;
	public:
	Three(int ii = 0, int = 0) : i(--ii) {cout<<"Three class constructor called\n";}
	void print(){cout<<"\nthree class integer value:"<<i<<"address of the object:"<<this<<endl; }
	friend void g(Three T1);
};
class Four {
	int x;
	public:
	Four(int xx) : x(xx) {}
	operator Three() const { cout<<"operator overloading function called\n";return Three(x); }
	void print(){cout<<"\nfour class integer value:"<<x<<"address of the object:"<<this<<endl; }
};
void g(Three t1) {
	t1.print();
	cout<<"\nFunction Name:"<<__FUNCTION__<<"\tthree class integer value:"<<t1.i<<"address of the object:"<<&t1<<endl;; 
}
int main() {
	Four four(7);
	four.print();
	cout<<"after four class object created\n";
	g(four);	
	four.print();
	cout<<"after g() function called\n";
	g(1); // Calls Three(1,0)
} ///:~
