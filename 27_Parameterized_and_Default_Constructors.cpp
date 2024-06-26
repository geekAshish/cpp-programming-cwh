#include <iostream>
#include <cmath>

using namespace std;

class Complex {
  int a, b;

  public:
    Complex(int x, int y);

    void printComplexValue(void) {
      cout<<"Complex value is : "<<a<<" + "<<b<<"i"<<endl;
    };

    void distanceOfTwoPoint(Complex o1, Complex o2) {
      float distance = sqrt(((o1.a - o2.a)*(o1.a - o2.a)) + ((o1.b - o2.b)*(o1.b - o2.b)));

      cout<<"The distance between ("<<o1.a<<", "<<o1.b<<" and "<<o2.a<<", "<<o2.b<<") is "<<distance;
    };
};

Complex :: Complex(int x, int y) { // parameterized constructors as it's accepts parameter
  a = x;
  b = y;
  cout<<"Hello World"<<endl;
};

int main() {
  // Implicit call
  Complex o1(1, 0);

  // Explicit call
  Complex o2 = Complex(70, 0);

  o1.printComplexValue();
  o2.printComplexValue();

  Complex o3(29, 3);
  o3.distanceOfTwoPoint(o1, o2);

  return 0;
};