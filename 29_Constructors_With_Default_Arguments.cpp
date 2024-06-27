#include <iostream>
using namespace std;

class Simple {
  int data1;
  int data2;

  public:
    Simple(int, int);
    void printValue(void);
};

Simple :: Simple(int a, int b = 9) {
  data1 = a;
  data2 = b;
};

void Simple :: printValue() {
  cout<<"The value of data 1 and data 2 is "<<data1<<" and "<<data2<<endl;
};

int main() {
  Simple s1(2, 8);
  Simple s2(2);

  s1.printValue();
  s2.printValue();

  return 0;
}