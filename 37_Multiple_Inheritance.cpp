#include <iostream>
using namespace std;

/*
Syntax for inheritance in multiple inheritance

class Derived_class : visiblity_mode Base_One, visiblity_mode Base_two
{
  // code
}
*/

class Base1 {
  protected:
    int base1int;
  public:
    void set_base1int(int a) {
      base1int = a;
    }
};
class Base2 {
  protected:
    int base2int;
  public:
    void set_base2int(int a) {
      base2int = a;
    }
};

class Derived : public Base1, public Base2 {
  public:
    void show() {
      cout<<"The value of the base1 is : "<<base1int<<endl;
      cout<<"The value of the base2 is : "<<base2int<<endl;
      cout<<"The sum is : "<<base1int + base2int<<endl;
    }
};

int main() {
  Derived c1;
  c1.set_base1int(4);
  c1.set_base2int(5);
  c1.show();

  return 0;
}