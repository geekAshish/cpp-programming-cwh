#include <iostream>
using namespace std;

class Complex {
  int real, imaginary;

  public:
    void setData(int a, int b) {
      real = a;
      imaginary = b;
    }

    void getData() {
      cout<<"The Real part is : "<<real<<endl;
      cout<<"The Imaginary part is : "<<imaginary<<endl;
    }
};

int main() {
  Complex c1;

  // Pointer to object
  // Complex *ptr = &c1;
  Complex *ptr = new Complex;
  (*ptr).setData(1, 23);
  (*ptr).getData();

  // Arrow Operator
  // This means first dereference the ptr and call the function from object which this was pointing to
  ptr->getData(); // is same as (*ptr).getData();

  return 0;
}