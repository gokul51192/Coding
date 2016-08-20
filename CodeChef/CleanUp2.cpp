#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int l_testcases_n;
	cin>>l_testcases_n;
	while(l_testcases_n-- > 0)
	{
		int l_numberOfJobs,l_completedJobs;
		cin>>l_numberOfJobs>>l_completedJobs;
		int l_array[1001] = { 0 };
		int l_temp_n;
		while(l_completedJobs-- > 0)
		{
			cin>>l_temp_n;
			l_array[l_temp_n] = 1;
		}
		int l_cjc,l_ajc;
		l_cjc = l_ajc = 0;
		int l_cjca[1001];
		int l_ajca[1001];
		int l_jav = 1;
		for(int i = 1;i<=l_numberOfJobs;i++)
		{
			if(l_array[i] != 0)
				continue;
			else if(l_jav == 1)
			{
				l_cjca[l_cjc++] = i;
				l_jav= 0;
			}
			else
			{
				l_ajca[l_ajc++] = i;
				l_jav = 1;
			}
		}
		cout<<endl;
		for(int i = 0;i<l_cjc;i++)
			cout<<" "<<l_cjca[i];
		cout<<endl;
		for(int i = 0;i<l_ajc;i++)
			cout<<" "<<l_ajca[i];
	}
	return 0;
}
