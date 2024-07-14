#include <iostream>
using namespace std;

class BaseClass{
  public:
    int var_base;
    virtual void display(){
      cout<<"Displaying Base class variable var_base "<<var_base<<endl;
    }
};

class DerivedClass : public BaseClass{
  public:
    int var_derived;
    void display(){
      cout<<"Displaying Base class variable var_base "<<var_base<<endl;
      cout<<"Displaying Derived class variable var_derived "<<var_derived<<endl;
    }
};


// Rules of Virtual Functions
// 1. They can't be static
// 2. They are accessed by object pointers
// 3. Virtual function can be a friend of the another class
// 4. A virtual function in a base class might not be used
// 5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class

int main() {
  BaseClass * base_class_pointer;
  BaseClass obj_base;
  DerivedClass obj_derived;

  base_class_pointer = &obj_derived;
  base_class_pointer->var_base = 43;
  base_class_pointer->display();

  return 0;
}