#include<stdio.h>
#include<iostream>
#include<math.h>
void calc(long long int N,long long int B,long long int M);
using namespace std;
long long int total_min;
int main()
{
	int l_tc;
	cin>>l_tc;
	while((l_tc--) > 0)
	{
		total_min = 0;
		long long int N,B,M;
		cin>>N>>B>>M;
		calc(N,B,M);
		cout<<total_min<<endl;
		
	}
	return 0;
}
void calc(long long int N,long long int B,long long int M)
{
	if(N < 1)
		return;	
	long long int l_temp;
	l_temp = N/2;
	if((l_temp * 2) == N)
	{
		total_min = total_min + (l_temp * M) + B;
		M = M*2;
		N=N-l_temp;
		calc(N,B,M);
	}
	else
	{
		l_temp = l_temp + 1;
		if(l_temp == N)
			B = 0;
		total_min = total_min + (l_temp * M) + B;
		M = M*2;
		N=N-l_temp;
		calc(N,B,M);

	}	
}

