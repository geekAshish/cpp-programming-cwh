#include <iostream>

using namespace std;

int num3 = 434;
int main() {
  // int num1, num2, num3;

  // cout<<"Enter num1: ";
  // cin>>num1;

  // cout<<"Enter num2: ";
  // cin>>num2;

  // num3 = num1 + num2;
  // cout<<"And the sum3 is: "<<num3<<endl;
  // cout<<"And the global sum3 is: "<<::num3<<endl; // :: is scope resolution operator



  // *********************** float, double, long double ***********************
  // float a = 45.33f;
  // long double dd = 44.3;

  // cout<<"The size of 45.33 is : "<<sizeof(45.33)<<endl; // by default it will be a double
  // cout<<"The size of 45.33F is : "<<sizeof(45.33f)<<endl;
  // cout<<"The size of 45.33f is : "<<sizeof(45.33F)<<endl;
  // cout<<"The size of 45.33l is : "<<sizeof(45.33l)<<endl;
  // cout<<"The size of 45.33L is : "<<sizeof(45.33L)<<endl;

  // *********************** Reference Variables ***********************
  // float x = 44;
  // float & y = x;
  // cout<<x<<endl;
  // cout<<y<<endl;


  // *********************** Typecasting ***********************
  int a = 44;
  float b = 443.244;
  // cout<<"the value of a is"<<a<<endl;
  // cout<<"the value of a is"<< (float)a<<endl;
  // cout<<"the value of a is"<< float(a)<<endl;

  // cout<<"the value of a is"<< (int)b<<endl;
  // cout<<"the value of a is"<< int(b)<<endl;

  int c = int(b);

  cout<<"The expression is: "<<a+b<<endl;
  cout<<"The expression is: "<<a+int(b)<<endl;
  cout<<"The expression is: "<<a+(int)b<<endl;


  return 0;
}