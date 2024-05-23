#include <iostream>
using namespace std;

// call by value
void swap(int a, int b) {
  int temp = a;
  a = b;
  b = a;
}

// call by reference
void swapByPointer(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Call by reference using C++ reference Variables
int & swapReferenceVariable(int & a, int & b) {
  int temp = a;
  a = b;
  b = temp;
  return a;
}

int main()
{
  int a = 4;
  int b = 5;
  cout<<"The value of a and b is "<<a<<" "<<b<<endl;
  // swap(a, b);  // this won't swap the value

  // swapByPointer(&a, &b);  // this will swap the value using pointer reference
  
  swapReferenceVariable(a, b) = 98787;  // this will swap the value using reference variables

  cout<<"The value of a and b is "<<a<<" "<<b<<endl;
  
  return 0;
}
