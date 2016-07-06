#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
class Rock
{
	public:
		int m_weight_n;
		Rock()
		{
			cout<<"\nConstructor invoked";
		}
		Rock(int p_weight):m_weight_n(p_weight)
		{
			cout<<"\nConstructor invoked";
		}
		Rock(const Rock & rhs)
		{
			m_weight_n = rhs.m_weight_n;
			cout<<"\n Copy Constructor called";
		}
		Rock& operator=(const Rock & rhs)
		{
			m_weight_n = rhs.m_weight_n;
			cout<<"\n Asignment operator overloaded for the class";
			return *this;
		}
		~Rock()
		{
			cout<<"\nDestructor invoked";
		}
};
int main()
{
	vector<Rock*> arr;
	int l_count = 0;
	do
	{
		l_count++;
		int l_status_n;
		printf("\nyou want to create a new Rock object then type 1 otherwise type 0");
		scanf("%d",&l_status_n);
		if(1 == l_status_n)
		{	
		 	Rock *l_obj = new Rock(l_count);
			arr.push_back(l_obj);
			continue;
		}
		else if(0 == l_status_n)
			break;
		else
			continue;
	}
	while(1);
	vector<Rock*>::iterator l_ta = arr.begin();
	while(l_ta != arr.end() )
	{
		cout<<"Weight of Rock object:"<<(*l_ta)->m_weight_n<<endl;
		delete (*l_ta);
		l_ta++;
	}		
	return 0;
}

