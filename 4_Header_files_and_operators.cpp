#include<iostream>

// There are two types of header files:
// 1. System header files: It comes with the compiler
// 2. User Defined header files
// #include "this.h"

// cpp reference website

using namespace std;
int main() {
  cout<<"Operators in c++"<<endl; // same as \n, for new line

  // Arithmetic operators : + - * / % a-- --a
  // a++ : first print then increment
  // ++a : first increment then print

  // Assignment operators : use to assign value to the variable
  int a = 5;

  // Comparison operators
  // if true --> 1, false --> 0
  cout<<"what is the value: "<< (5==9);
  cout<<"what is the value: "<< (5!=9);
  cout<<"what is the value: "<< (5>9);
  cout<<"what is the value: "<< (5<9);
  cout<<"what is the value: "<< (5<=9);
  cout<<"what is the value: "<< (5>=9);

  // Logical operators
  // AND --> &&
  // OR --> ||


  return 0;
}