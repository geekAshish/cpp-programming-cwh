#include <iostream>
using namespace std;

class A {
  int a;
  public:
    // A & setData(int a) {
    void setData(int a) {
      this-> a = a;
      // return *this; // if we return this
    }

    void getData() {
      cout<<"The value of a is : "<<a<<endl;
    }
};

int main() {
  // this is a keyword which is a pointer, which points to the object which invokes the member function
  A a;
  a.setData(5);
  a.getData();

  // a.setData(5).getData(); // if we return this, we have access to the object, and don't have to use getData() explicitly

  return 0;
}