#include <iostream>
using namespace std;

/*
# CONSTRUCTORS IN DERIVED CLASSES

1. We can use constructors in derived classes in C++
2. If base class constructor does not have any arguments, there is no need of any constructor in derived class.
3. But if there are one or more arguments in the base class constructor, derived class need to pass arguments to the base class constructor
4. If both base and derived classes have constructors, base class constructor is executed first.

# CONSTRUCTORS IN MULTIPLE INHERITANCE
1. In multiple inheritance, base classes are constructed in the order in which they appear in the class declaration
2. In multilevel inheritance, the constructors are executed in the order of inheritance

# SPECIAL SYNTAX
1. C++ supports an special syntax for passing arguments to multiple base classes
2. The constructor of the derived class receives all the arguments at once and then will pass the calls to the respective base classes
3. The body is called after all the constructors are finished executing.

Derived-Constructor (arg1 , arg2, arg3, ...): Base1-Constructor(arg1, arg2), Base2-Constructor(arg3, arg4){
...
} Base1-Constructor(arg1 , arg2)


# SPECIAL CASE OF VIRTUAL BASE CLASS
1. The constructors for virtual base classes are invoked before an non-virtual base class
2. If there are multiple virtual base classes, they are invoked in the order declared.
3. Any non-virtual base class are then constructed before the derived class constructor is executed

*/


/*
Case 1:
class A: public B {
  // order of execution of constructor -> first B() then A()
}

Case 2:
class A: public B, public C {
  // order of execution of constructor -> first B() then C() then A()
}

Case 3:
class A: public B, virtual public C {
  // order of execution of constructor -> first C() (virtual class got preference) then B() then A()
}

Case 4:
class A: public B, public C { // there order matters, first one got preference
  constructorOfA(int a, int b, int c, int d): ClassB(a), ClassC(b) { // here base class order does't matter
    // code
  }
}
*/

class Base1 {
  int data1;
  public:
    Base1(int a) {
      data1 = a;
      cout<<"Base 1 constructor called"<<endl;
    }

    void getBase1Data() {
      cout<<"The value of data 1 is "<<data1<<endl;
    }
};
class Base2 {
  int data2;
  public:
    Base2(int a) {
      data2 = a;
      cout<<"Base 2 constructor called"<<endl;
    }

    void getBase2Data() {
      cout<<"The value of data 2 is "<<data2<<endl;
    }
};

class DerivedClass : public Base1, public Base2 {
  int derived1, derived2;

  public:
    DerivedClass(int a, int b, int c, int d): Base1(a), Base2(b) {
      derived1 = c;
      derived2 = d;
      cout<<"Derived Class Called"<<endl;
    }

    void getDerivedData() {
      cout<<"The value of derived1 is "<<derived1<<endl;
      cout<<"The value of derived2 is "<<derived2<<endl;
    }
};


int main() {
  DerivedClass der(1, 2, 3, 4);
  der.getBase1Data();
  der.getBase2Data();
  der.getDerivedData();

  return 0;
}