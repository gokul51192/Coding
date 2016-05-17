#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	time_t l_time_now;
	struct tm future_date;
	int  day,month,year;
	cout<<"Enter a year";
	cin>>year;
	cout<<"Enter a month";
	cin>>month;
	cout<<"Enter a day";
	cin>>day;
	time(&l_time_now);
	future_date = *localtime(&l_time_now);
	future_date.tm_year = year-1900;
	future_date.tm_mon = month - 1;
	future_date.tm_mday = day;	
	mktime(&future_date);
	future_date.tm_mday = future_date.tm_mday - 120;
	mktime(&future_date);
	printf("\n Your future date is YEAR-MONTH-DATE [%d-%d-%d]",future_date.tm_year+1900,future_date.tm_mon+1,future_date.tm_mday);
	return 0;
}
