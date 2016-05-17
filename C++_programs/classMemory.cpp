#include<iostream>
#include<string.h>
using namespace std;
class animal
{
	public:
		int animal_id;
		int animal_age;
};
class dog :public animal
{
	public:
		int dog_type_id;
};
int main()
{
	dog d1;
	animal a1;
	cout<<"sizeof d1:"<<sizeof(d1)<<endl;
	cout<<"sizeof a1:"<<sizeof(a1)<<endl;
	return 0;
}

