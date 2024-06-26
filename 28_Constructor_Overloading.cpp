#include <iostream>
using namespace std;

class Complex {
  int x, y;

  public:
    Complex() {
      x = 0;
      y = 0;
    }

    Complex(int a) {
      x = a;
      y = 0;
    }
    Complex(int a, int b) {
      x = a;
      y = b;
    };

    void printNumber(void) {
      cout<<"the number is "<<x<<" and "<<y<<endl;
    }
};

int main() {
  Complex o1;
  o1.printNumber();

  Complex o2(4);
  o2.printNumber();

  Complex o3(6, 7);
  o3.printNumber();

  return 0;
}