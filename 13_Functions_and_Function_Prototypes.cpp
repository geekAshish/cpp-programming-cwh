#include <iostream>

using namespace std;

// function Prototype : when you write your function after main() function
// type function_name(argument);
// int sumNumber(int a, int b);  // Acceptable
// int sumNumber(int a, b);  // Not Acceptable
int sumNumber(int, int);  // Acceptable

// void greetPeople(void);  // Acceptable
void greetPeople();  // Acceptable


int main()
{
  int num1, num2;

  cout<<"Enter the num1"<<endl;
  cin>>num1;

  cout<<"Enter the num2"<<endl;
  cin>>num2;

  // Here num1 and num2 are actual parameters
  cout<<"The sum of the value : "<<sumNumber(num1, num2)<<endl;

  greetPeople();
  
  return 0;
}

// Here a and b are formal parameter
int sumNumber(int a, int b) {
  int c = a + b;
  return c;
}

void greetPeople() {
  cout<<"Good Morning"<<endl;
}