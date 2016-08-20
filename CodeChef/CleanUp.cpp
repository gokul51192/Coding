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
		int l_array[1000] = { 0 };
		while(l_completedJobs-- > 0)
		{
			int l_temp_n;
			cin>>l_temp_n;
			l_array[l_temp_n] = 1;
		}
		char l_chef_value[3500];
		char l_assistant_value[3500];
		memset(l_chef_value,'\0',sizeof(l_chef_value));
		memset(l_assistant_value,'\0',sizeof(l_assistant_value));
		char temp_char[15];
		int l_job_alteration = 1;
		for(int i = 1 ;i<=l_numberOfJobs;i++)
		{
			memset(temp_char,'\0',sizeof(temp_char));
			if(l_array[i] == 0)
			{
				if(l_job_alteration == 1)
				{
					sprintf(temp_char,"%d ",i);
					strcat(l_chef_value,temp_char);
					l_job_alteration = 0;
				}
				else
				{
					sprintf(temp_char,"%d ",i);
					strcat(l_assistant_value,temp_char);
					l_job_alteration = 1;	
				}
			}
		}
		printf("%s\n",l_chef_value);	
		printf("%s\n",l_assistant_value);	
	}
	return 0;
}
