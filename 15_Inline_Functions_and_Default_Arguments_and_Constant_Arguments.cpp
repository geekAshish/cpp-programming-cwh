#include <iostream>
using namespace std;


// 1. after writing inline, It doesn't necessary that it become inline function
// use only when a small code have to run multiple times, not for big logic
// don't use for recursion, static variables, loops, switch

inline int product(int a, int b) {
  return a * b;
}


// 2. Default Argument
float sumNumber(int a, float b = 5.44) {
  return a + b;
}

// 3. constant argument
// int strlen(const char* p) {
//    you can't change the p inside this function
//    most use full while function call by reference
// }

int main()
{
  int a = 5;
  int b = 44;
  cout<<"This is a inline function: "<<product(a, b)<<endl;

  cout<<"The sum of the value "<<sumNumber(292);
  cout<<"The sum of the value "<<sumNumber(292, 8);

  return 0;
}
