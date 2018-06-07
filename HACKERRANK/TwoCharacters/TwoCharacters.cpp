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
    while( (i < (l_string_length/2)+1) )
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
void check_combination(char first,char second,string  s)
{
  string temp;
  int strlen = s.size();
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
  map<char,int> value_map;
  value_map.clear();
  int strlen = s.size();
  for(int i=0;i<strlen;i++)
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
        check_combination(((*it).first),((*inner_it).first),s);
        l_can_be_removed = false;
      }
    }
  }
  return;
}
// Complete the twoCharaters function below.
int twoCharaters(string s) {
  string_length_set.insert(0);
  remove_chars_by_length(s);
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
  //getline(cin, s);

  int result = twoCharaters(s);

  cout << result << "\n";

  //fout.close();

  return 0;
}
