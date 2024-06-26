#include <iostream>
using namespace std;

class Complex {
  int a, b;


  public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created

    Complex(void); // Constructor Function

    void printComplexValue(void) {
      cout<<"Complex value is : "<<a<<" + "<<b<<"i";
    }
};

Complex :: Complex(void) { // It's a default constructor as it accepts no parameters
  a = 4;
  b = 8;
  cout<<"Hello World";
};

int main()
{
  Complex o1;
  o1.printComplexValue();

  return 0;
}


/*
Characteristics of Constructors

1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address

*/