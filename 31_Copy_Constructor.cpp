#include <iostream>
using namespace std;

class Number {
  int a;

  public:
    Number() {
      a = 0;
    }

    Number(int number) {
      a = number;
    }

    // When no copy constructor found, compiler supplies it's own copy constructor
    // you can comment copy constructor and the code will work
    Number(Number &obj) {
      cout<<"Copy constructor called"<<endl;
      a = obj.a;
    }

    void show() {
      cout<<"the value is "<<a<<endl;
    }
};

int main() {
  Number x, y, z(35), z3;

  x = Number(4);
  x.show();

  y = Number(4);
  y.show();

  Number z1 = Number(z); // copy constructor invoked
  z1.show();

  z3 = z; // copy constructor won't invoke

  Number z2 = z; // copy constructor invoked, because it's initialized here

  return 0;
}