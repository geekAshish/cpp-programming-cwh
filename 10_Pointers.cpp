#include <iostream>

// What is a pointers? ---> A Data type which holds the address of the others data types
// & ---> "Address of" Operator
// * ---> Dereference Operator

using namespace std;
int main()
{
  int a = 5;
  int* b = &a;

  cout<<"The address of a is : "<<&a<<endl;
  cout<<"The address of a is : "<<b<<endl;

  cout<<"The value at address b is : "<<*b<<endl;


  // Pointer to Pointer
  int** c = &b;

  cout<<"The address of b is : "<<&b<<endl;
  cout<<"The address of b is : "<<c<<endl;
  cout<<"The value at address c is address of a: "<<*c<<endl;
  cout<<"The value at address c is address of a: "<<b<<endl;
  cout<<"The value at address value_at(value_at(c)) is : "<<**c<<endl;


  return 0;
}
