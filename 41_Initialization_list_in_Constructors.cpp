#include <iostream>
using namespace std;

/*
ways of assigning value to variable with constructor
Syntax for initialization list in constructor:
constructor (argument-list) : initialization-section {
  assignment + other class
}
*/

class ClassName {
  int a;
  int b;

  public:
    // ClassName(int x, int y): a(x), b(y)
    // ClassName(int x, int y): a(x), b(x+y)
    // ClassName(int x, int y): a(x), b(a+y)
    // ClassName(int x, int y): b(x), a(y+b) // this will create problem because a will be initialized first
    ClassName(int x, int y): a(x) // can describe both places
    {
      b = y;
      cout<<"Constructor executed"<<endl;
      cout<<"Value of a is : "<<a<<endl;
      cout<<"Value of b is : "<<b<<endl;
    }
};

int main() {
  ClassName thisName(1, 2);

  return 0;
}