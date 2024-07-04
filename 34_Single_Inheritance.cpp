#include <iostream>
using namespace std;

class Base {
  int data1; // private variable by default and it's not inheritable
  public:
    int data2;
    void setData();
    void setData1(int a) {
      data1 = a;
    }
    int getData1();
    int getData2();
};

void Base :: setData() {
  data1 = 10;
  data2 = 20;
}

int Base :: getData1() {
  return data1;
}

int Base :: getData2() {
  return data2;
}

// class is being derived publicly
// if you derive privately, so Base class public members will become privet for Derived class
class Derived : public Base {
  int data3;
  public:
    void process();
    void display();
};

void Derived :: process() {
  data3 = data2 * getData1();
}
void Derived :: display() {
  cout<<"Value of data 1 is: "<<getData1()<<endl;
  cout<<"Value of data 2 is: "<<data2<<endl;
  cout<<"Value of data 3 is: "<<data3<<endl;
}

int main() {
  Derived der;
  der.setData();
  der.process();
  der.display();

  der.setData1(8);
  cout<<der.getData1()<<endl;

  return 0;
};