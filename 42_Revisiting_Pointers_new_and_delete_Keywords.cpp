#include <iostream>
using namespace std;

int main() {
  // basic example
  int a = 5;
  int* ptr = &a;
  cout<<"the value of a is : "<<*(ptr)<<endl;

  // new Operator
  int *p = new int(5);// dynamic allocated int will be freed
  float *g = new float(15);
  cout<<"The p is "<<p<<endl;
  cout<<"The value at p, g is: "<<*p<<", "<<*g<<endl;

  int* arr = new int[3];
  arr[0] = 10;
  *(arr+1) = 20;
  arr[2] = 30;
  cout<<"The value of arr[0] is : "<<arr[0]<<endl;
  cout<<"The value of arr[1] is : "<<arr[1]<<endl;
  cout<<"The value of arr[2] is : "<<arr[2]<<endl;

  // Delete Operator
  delete[] arr; // dynamic allocated array will be freed

  return 0;
}