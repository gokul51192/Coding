#include<iostream>
#include<math.h>
using namespace std;
template <typename T> 
void is_even(T p_value)
{
	T l_value = p_value;
	l_value = ceil(l_value);
	if( l_value != p_value)
		cout<<"\nyour value is floating point value";
	int l_temp = l_value;
	if(l_temp % 2 == 0 )
		cout<<"\nYour value is even";
	else
		cout<<"\nYour value is odd";

}
template <typename T>
struct is_void
{
	static const int value = false;
};
template <>
struct is_void<void>
{	
	static const int value = true;
};
template <>
struct is_void<int>
{	
	static const int value = 2;
};
template <typename T>
struct is_void<T*>
{
	static const int value = 7;
};
int main()
{
	is_even(2);
	is_even(4.3);
	is_void<int> a;
	is_void<void> b;
	is_void<int> c;
	is_void<int *>d;
	cout<<"\n"<<a.value<<"\n";
	cout<<"\n"<<b.value<<"\n";
	cout<<"\n"<<c.value<<"\n";
	cout<<"\n"<<d.value<<"\n";
	return 0;
}
