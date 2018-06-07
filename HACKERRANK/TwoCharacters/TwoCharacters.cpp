#include <bits/stdc++.h>
#include<algorithm>
#include<string>
#include<set>
#include <map>
#include <vector>

using namespace std;
set<int , greater<int>> string_length_set;

bool check_string(const string  & s)
{
	int l_string_length = s.size();
	if(l_string_length > 1)
	{
		bool l_string_size_status;
		if(l_string_length % 2 == 0)
			l_string_size_status = true;
		else
		{
			l_string_size_status = false;
			l_string_length = l_string_length - 1;
		}
		const char first = s[0];
		const char second = s[1];
		int i=2;int k = l_string_length-2;
		int j=l_string_length-1;int l=3;
		while( (i < l_string_length/2) )
		{
			if(first != s[i])
				return false;
			if(second != s[j])
				return false;
			if(first != s[k])
				return false;
			if(second != s[l])
				return false;
			l=l+2;
            i=i+2;
            j=j-2;
            k =k-2;
		}
		if(false == l_string_size_status)
		{
			l_string_length++;
			if(first != s[l_string_length-1])
				return false;
		}
		return true;
	}
	return false;
}

void remove_character_from_string(string & s,const char ch,int strlen)
{
	string temp;
	strlen = s.size();
	for(int i=0;i<strlen;i++)
	{
		if(s[i] != ch)
			temp.append(1,s[i]);
	}
	s = temp;
	return;
}

inline void remove_character_set_from_string(string & s,vector<char> & vec,int strlen)
{
	string temp;
	strlen = s.size();
	bool appendStatus;
	for(int i=0;i<strlen;i++)
	{
		appendStatus = true;
		for(auto it=vec.begin();it!=vec.end();it++)
		{
			if(s[i] == (*it))
			{
				appendStatus = false;
			}
		}
		if(appendStatus == true)
		{
			temp.append(1,s[i]);
		}
	}
	s = temp;
	return;
}

int get_second( pair<char, int> i ){ return i.second; }
int max_length_pair(string s)
{
	if(s.size() <=  1)
		return 0;
	map<char,int> value_map;
	for(int i=0;i<s.size();i++)
	{
		if( value_map.end() == value_map.find(s[i]) )
			value_map[s[i]] = 1;
		else
			value_map[s[i]] = value_map[s[i]]+1;
	}
	vector<int> v( value_map.size() );
	transform( value_map.begin(), value_map.end(), v.begin(), get_second );
	sort( v.rbegin(), v.rend() );
	int a;
	a = v[0] + v[1];
	return a;
}
void check_combination(char first,char second,string & s)
{
  string temp;
  strlen = s.size();
  for(int i=0;i<strlen;i++)
  {
    if(s[i] == first || s[i] == second)
      temp.append(1,s[i]);
  }
  s = temp;
  if(true == check_string(temp))
    string_length_set.insert(temp.size());
  return;
}
void remove_chars_by_length(string &s)
{
	vector<char>  set_values_needs_to_be_removed;
	set_values_needs_to_be_removed.clear();
	for(int i=0;i<s.size();i++)
	{
    if(s[i] == s[i+1])
		{
			set_values_needs_to_be_removed.push_back(s[i]);
		}
	}
  for(auto it=set_values_needs_to_be_removed.begin();it!=set_values_needs_to_be_removed.end();it++)
	{
		remove_character_from_string(s,(*it),s.size());
	}
  map<char,int> value_map.clear();
  for(int i=0;i<s.size();i++)
  {
    if( value_map.end() == value_map.find(s[i]) )
      value_map[s[i]] = 1;
    else
      value_map[s[i]] = value_map[s[i]]+1;
  }
	for(auto it=value_map.begin();it!=value_map.end();it++)
	{
		bool l_can_be_removed =  true;
		for(auto inner_it=value_map.begin();inner_it!=value_map.end();inner_it++)
		{
			if( ((*it).first) == ((*inner_it).first) )
			{
				continue;
			}
			if( ((((*it).second)-1) ==  ((*inner_it).second)) || ((((*it).second)+1) ==  ((*inner_it).second)) || (((*it).second) ==  ((*inner_it).second)) )
			{
        check_combination(((*it).first),((*inner_it).first),s)
				l_can_be_removed = false;
			}
		}
		//if(true == l_can_be_removed)
			//set_values_needs_to_be_removed.push_back((*it).first);
	}
	/*for(auto it=set_values_needs_to_be_removed.begin();it!=set_values_needs_to_be_removed.end();it++)
	{
		remove_character_from_string(s,(*it),s.size());
	}*/
	return;
}
void remove_sameadjacent_char(string & s)
{
    int str_len = s.size();
    vector<char>  set_values_needs_to_be_removed;
	bool l_status = true;
	while(l_status)
	{
		set_values_needs_to_be_removed.clear();
		l_status = false;
		for(int i=0;i<str_len-1;i++)
		{
			if(s[i] == s[i+1])
			{
				set_values_needs_to_be_removed.push_back(s[i]);
				l_status = true;
				continue;
			}
		}
		if(true == l_status)
		{
			for(auto it=set_values_needs_to_be_removed.begin();it!=set_values_needs_to_be_removed.end();it++)
			{
				remove_character_from_string(s,(*it),str_len);
				str_len = s.size();
			}
		}
	}
    return;
}
void compute_and_remove_character(string p_string,set<int , greater<int>>& p_string_length_set)
{
     remove_sameadjacent_char(p_string);
    //remove_chars_by_length(p_string);
	int string_length = p_string.size();
	auto it1 = p_string_length_set.begin();
	if( (*it1) >= p_string.size() )
		return;

    /*if( (*it1) >=max_length_pair(p_string))
		return;*/

	if(true == check_string(p_string))
	{
		p_string_length_set.insert(p_string.size());
		return;
	}
	for(int i=0;i<(string_length-1);i++)
	{
		string temp(p_string);
		remove_character_from_string(temp,temp[i],string_length);
		auto it = p_string_length_set.begin();
		if( (*it) < temp.size() )
		{
			if(true == check_string(temp))
				p_string_length_set.insert(temp.size());
			else
				compute_and_remove_character(temp,p_string_length_set);
		}
	}
	return;
}
// Complete the twoCharaters function below.
int twoCharaters(string s) {
	string_length_set.insert(0);
	remove_chars_by_length(s);
  //remove_sameadjacent_char(s);
	//compute_and_remove_character(s,string_length_set);
	auto it=string_length_set.begin();
	return *it;
}


int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    //int l;
    //cin >> l;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    cin>>s;
    getline(cin, s);

    int result = twoCharaters(s);

    cout << result << "\n";

    //fout.close();

    return 0;
}
