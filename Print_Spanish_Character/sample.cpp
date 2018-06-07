#include<iostream>
using namespace std;
#include <fcntl.h>  
#include<bits/stdc++.h>
#include<string>

int main()
{
	std::wstringstream ss;
	ss<<("é Ú ü go Ñ sáÁÉ  es un estándar");
	wstring s=ss.str();
	wprintf(L"3 %ls",s.c_str());
	return 0;
}
