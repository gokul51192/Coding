#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;


int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	int l_postive_num_count,l_negative_count,l_zero_count;
	l_postive_num_count = l_negative_count = l_zero_count = 0;
	for(int arr_i = 0;arr_i < n;arr_i++){
		cin >> arr[arr_i];
		if(arr[arr_i] > 0)
			l_postive_num_count++;
		else if(arr[arr_i] < 0)
			l_negative_count++;
		else
			l_zero_count++;
	}
	std::cout << std::setprecision(6);
	std::cout << std::fixed;
		cout<<(((double)l_postive_num_count)/((double)n))<<"\n"<<(((double)l_negative_count)/((double)n))<<"\n"<<(((double)l_zero_count)/((double)n));
	return 0;
}

