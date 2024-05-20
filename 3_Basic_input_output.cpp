#include <iostream>

// C++ comes with libraries which helps us in performing input/output. In C++ sequence of
// bytes corresponding to input and output are commonly known as streams.

// Input Stream: Direction of flow of bytes takes place from input device(for ex Keyboard) to the main memory.
// Output Stream: Direction of flow of bytes takes place from main memory to the output device (for example Display)


using namespace std;

int main() {
  cout<<"Basic Input/Output";

  int num1, num2;
  cout<<"Enter the value of num1: \n"; // '<<' this is Insertion Operator
  cin>>num1; // '>>' this is Extraction operator

  cout<< "Enter the value of num2: \n";
  cin>>num2;

  cout<<"Here is the sum of the num1 and num2 = "<< num1+num2;
  
  return 0;
}