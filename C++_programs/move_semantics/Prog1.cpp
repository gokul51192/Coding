#include<iostream>
using namespace std;
bool is_temp_int(const int & p)
{
	return false;
}
bool is_temp_int(const int && p)
{
	return true;
}	
int main()
{
	bool b = is_temp_int(3);

	if(b)
		cout<<"\n is_temp_int(3) :: true \n";
	else
		cout<<"\n is_temp_int(3) :: false \n";

	int x = 1;
	b = is_temp_int(x);

	if(b)
		cout<<"\n is_temp_int(x) :: true \n";
	else
		cout<<"\n is_temp_int(x) :: false \n";

	b = is_temp_int(x++);
	if(b)
		cout<<"\n is_temp_int(x++) :: true \n";
	else
		cout<<"\n is_temp_int(x++) :: false \n";


	b = is_temp_int(++x);
	if(b)
		cout<<"\n is_temp_int(++x) :: true \n";
	else
		cout<<"\n is_temp_int(++x) :: false \n";

	return 0;

}
