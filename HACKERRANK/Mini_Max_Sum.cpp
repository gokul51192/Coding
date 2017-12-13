#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	vector<int> arr(10);
	int key,j;
	for(int arr_i = 0; arr_i < 5; arr_i++){
		cin >> arr[arr_i];

		key = arr[arr_i];
		j = arr_i-1;

		/* Move elements of arr[0..i-1], that are
		   greater than key, to one position ahead
		   of their current position */
		while (j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;


	}
	printf("\n Before core dump \n");
	long int a = 0;
	for(int i = 0;i<4;i++)
		a = a + arr[i];
	cout<<a<<" ";
	a = 0;
	for(int i = 1;i<5;i++)
		a = a + arr[i];
	cout<<a;
	return 0;
}

