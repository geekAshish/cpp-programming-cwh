#include <iostream>

// A Variable is a container to hold data
// Variable can be of various types. Primarily we have these variable types in cpp
// int        1, 2, 3
// float      2.4, 3.2               Decimal number of low precision
// char       'a', 'n', 'r'
// Double     4.44789749879847984    Decimal number of high precision
// Boolean    true/false

// Variable names in C++ can range from I to 255 characters.

// int sum = 34; means sum is an integer variable which holds value 34 in memory

// SYNTAX FOR DECLARING VARIABLES IN C++
// data_type variable_name = value;

// Based on Scope, variable can be classified into two types:
// I. Local Variables
// 2. Global Variables

// Data types in C++ are categorised in three groups
// Build-in               int, float, char, Double, bool
// Derived                Array, function, pointers
// User-defined           struct, union, enum

using namespace std;

void sumNumber(int numberGetting) {
  // int numberGetting = 555;
  cout<<numberGetting;
};

int main() {
  int sum = 9, a = 1, b = 2;
  float PI = 3.14;
  bool is_true = true;

  cout<<"This code is good\n";
  cout<<"This code is good"<<sum<<"\n";

  cout<<"value of a is "<< a <<" and value of b is "<< b <<"\n";
  cout<<"value of PI is "<< PI <<'\n';

  cout<<"value of is_true is "<< is_true <<'\n';

  sumNumber(4);

  return 0;
}