#include<iostream>
#include<string>
using namespace std;
int main() {
  int l_testcases_n;
  cin>>l_testcases_n;
  while (l_testcases_n-- > 0) {
    int l_numberOfHeaps;
    string l_startingPlayerName;
    cin>>l_numberOfHeaps>>l_startingPlayerName;
    std::vector<int> l_HeapsDetails;
    l_HeapsDetails.clear();
    int l_temp;
    for (int i = 0;i < l_numberOfHeaps; i++) {
      cin>>l_temp;
      l_HeapsDetails.push_back(l_temp);
    }
  }
  return 0;
}
/*
Dee - even
Dum - odd
even set
2
2 2 (heaps also even)
if(Dee starts)
  Dum wins
if(Dum starts)
  Dum wins
________________________________
2 even set
3 2(heaps also odd, even)
if(Dee starts)
  Dum wins
else if(Dum starts)
  Dum wins
_________________________________
odd set
3 3 2(heaps also two odd , single even)
if(Dee starts)

*/
