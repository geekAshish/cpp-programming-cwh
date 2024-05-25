#include <iostream>

using namespace std;

class Employee {
  private:
    int a, b, c;

  public:
    int d, e;
    void setData(int a1, int b1, int c1); // Declaration
    void getData() {
      cout<<"The value of a is : "<<a<<endl;
      cout<<"The value of b is : "<<b<<endl;
      cout<<"The value of c is : "<<c<<endl;
      cout<<"The value of d is : "<<d<<endl;
      cout<<"The value of e is : "<<e<<endl;
    };
};

void Employee :: setData(int a1, int b1, int c1) {
  a = a1;
  b = b1;
  c = c1;
};

int main()
{
  Employee person1;

  // person1.a = 9; // can't access it's private, only a function inside the class can access it
  person1.d = 9;
  person1.e = 100;
  person1.setData(1, 2, 3); // setting a, b, c which are private
  person1.getData();
  
  return 0;
}
