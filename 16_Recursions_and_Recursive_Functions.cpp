#include <iostream>

using namespace std;

int factorial(int a) {
  if (a <= 1)
  {
    return 1;
  }

  return a * factorial(a-1);
  
};

int main()
{
  cout<<"Enter the number: "<<endl;
  int num;
  cin>>num;
  int factorialValue = factorial(num);
  cout<<"The value of "<<num<<" factorial is : "<<factorialValue<<endl;
  
  return 0;
}
