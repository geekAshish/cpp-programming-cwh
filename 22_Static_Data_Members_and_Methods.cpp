#include <iostream>
using namespace std;

class Employee {
  int id;
  static int count; // static variable

  public:
    void setId(void) {
      cout<<"Enter the id of the employee "<<endl;
      cin>>id;
      
      count++;
    };
    void getId(void) {
      cout<<"Employee id is : "<<id<<" and count is "<<count<<endl;
    };

    // Static methods can only access the static variable
    // And it can access directly from the Class
    static void getCount(void) {
      cout<<"Value of count is : "<<count<<endl;
    }
};

int Employee :: count = 1000; // default value will be 0;

int main() {
  Employee dev1, dev2, dev3;

  dev1.setId();
  dev1.getId();
  Employee::getCount(); // It can access directly from the Class

  dev2.setId();
  dev2.getId();
  Employee::getCount();

  dev3.setId();
  dev3.getId();
  Employee::getCount();

  return 0;
};