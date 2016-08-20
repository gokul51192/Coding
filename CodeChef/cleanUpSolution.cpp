#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n+1];
		for(int i=0;i<=n;i++)
			a[i]=0;	
		for(int i=0;i<m;i++)
		{
			int d;
			cin>>d;
			a[d]=-1;
		}
		int h=1,k=0,l=0,chef[n],ass[n];
		for(int i=1;i<=n;i++)
		{
			if(a[i]==-1)
				continue;
			else if(h%2==0)
			{
				ass[k++]=i;
				h++;
			}else{
				chef[l++]=i;
				h++;
			}
		}
		cout<<endl;
		for(int i=0;i<l;i++)
			cout<<" "<<chef[i];
		cout<<endl;
		for(int i=0;i<k;i++)
			cout<<" "<<ass[i];
	}
	return 0;
}
