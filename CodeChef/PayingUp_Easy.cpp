#include<iostream>
#include<vector>
using namespace std;
bool l_subsetOfMoneyFlag = false;
bool check_subset_Money(std::vector<int> &p_obj,int position,int &p_numberOfNotes_n,int &p_moneyAsked_n,int p_prevSubsetValue);
int main()
{
	int l_testcases_n;
	cin>>l_testcases_n;
	while(l_testcases_n--)
	{
		int l_numberOfNotes_n,l_moneyAsked_n,l_eachMoneyValue;
		cin>>l_numberOfNotes_n>>l_moneyAsked_n;
		vector<int> l_moneyDetails;
		l_moneyDetails.clear();
		for(int i=0;i<l_numberOfNotes_n;i++)
		{
			cin>>l_eachMoneyValue;
			l_moneyDetails.push_back(l_eachMoneyValue);
		}
		if (true == check_subset_Money(l_moneyDetails,0,l_numberOfNotes_n,l_moneyAsked_n,0)) {
			cout<<"Yes";
			cout<<endl;
		}
		else
		{
			cout<<"No";
			cout<<endl;
		}
	}
	return 0;
}
bool check_subset_Money(std::vector<int> &p_obj,int position,int &p_numberOfNotes_n,int &p_moneyAsked_n,int p_prevSubsetValue)
{
		int l_prevSubSetValue = p_prevSubsetValue;
		int l_temp = p_obj[position];
		if(p_moneyAsked_n == l_prevSubSetValue+l_temp)
				return true;
		for(int i=position;i<p_numberOfNotes_n-1;i++)
		{
				 return check_subset_Money(p_obj,i+1,p_numberOfNotes_n,p_moneyAsked_n,(l_prevSubSetValue+l_temp)) || check_subset_Money(p_obj,i+1,p_numberOfNotes_n,p_moneyAsked_n,(l_prevSubSetValue));
		}
		return false;
}
