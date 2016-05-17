#include<stdio.h>
#include<string.h>
class Base {
public:
    int x;
};
 
class Derived : public Base { }; // is equilalent to class Derived : private Base {}
 
int main()
{
  Derived d;
  d.x = 20; // compiler error becuase inheritance is private
  getchar();
  return 0;
}
