#include <iostream>
using namespace std;

// These are user defined data types

typedef struct employee
{
  int eId;        // 4
  char favChar;   // 1
  float salary;   // 4 total = 9
} ep;

// union for better memory management
union student
{
  int sId;            // 4
  char favChar;       // 1
  float pocketMoney;  // 4 total = 4
};


int main()
{
  // structure
  struct employee employee44;
  ep employee45;
  employee44.eId = 4;
  employee44.favChar = '5';
  employee44.salary = 12000000000;

  employee45.eId = 5;
  employee45.favChar = '6';
  employee45.salary = 67000000000;

  // cout<<"The salary is : "<<employee44.salary<<endl;


  // union
  union student student989;
  student989.sId = 4;
  student989.pocketMoney = 90000000000000000;

  // only last assigned value will be in the print, other will print just the garbage value
  // cout<<"The pocket money is : "<<student989.sId<<endl;
  // cout<<"The pocket money is : "<<student989.pocketMoney<<endl;



  // enum
  enum Meal{breakfast, lunch, dinner};

  Meal m1 = lunch;

  cout<<breakfast<<endl;
  cout<<lunch<<endl;
  cout<<dinner<<endl;
  cout<<m1<<endl;
  cout<<(m1==1)<<endl; // true
  cout<<(m1==8)<<endl; // false

  return 0;
}
