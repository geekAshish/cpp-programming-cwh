#include <iostream>
using namespace std;

// Array of object
class Employee {
  int id;
  int salary;

  public:
    void setId() {
      salary = 100;
      cout<<"Enter Id of the Employee : "<<endl;
      cin>>id;
    };
    void getId() {
      cout<<"Id of the Employee : "<<id<<endl;
    };
};

// Passing Object as Function arguments
class Complex {
  int a;
  int b;

  public:
    void setData(int v1, int v2) {
      a = v1;
      b = v2;
    };
    void setDataBySum(Complex o1, Complex o2) { // Here o1 and o2 could be objects from different class
      a = o1.a + o2.a;
      b = o1.b + o2.b;
    }
    void printNumber() {
      cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main() {
  Employee companyName[3];

  for (int i = 0; i < 3; i++)
  {
    companyName[i].setId();
    companyName[i].getId();
  }

  //
  Complex c1, c2, c3;
  c1.setData(1, 2);
  c1.printNumber();

  c2.setData(3, 4);
  c2.printNumber();

  c3.setDataBySum(c1, c2);
  c3.printNumber();

  return 0;
};