#include <iostream>

// 1. An array is a collection of items of similar type stored in contiguous memory locations.
// 2. Sometimes, a simple variable is not enough to hold all the data.
// 3. For example, lets say we want to store the marks of 2500 students, having 2500 different variables for this task is not feasible.
// 4. To solve this problem, we can define an array with size 2500 that can hold the marks of all students.


using namespace std;
int main()
{
  // int marksArray[20] = {12, 45, 76, 554, 76};
  int marksArray[] = {12, 45, 76, 554, 76};

  // can change the value of an array
  marksArray[2] = 980;

  int i = 0;
  // do {
  //   cout<<marksArray[i]<<endl;
  //   i++;
  // } while (i < 5);


  // *************************************************
  // Pointer and arrays
  // marksArray it self is address of first element of the array

  int* p = marksArray;
  cout<<*(p++)<<endl;
  cout<<*(++p)<<endl;

  while (i < 5)
  {
    cout<<*(marksArray+i)<<endl;
    i++;
  }
  
  // pointer arithmetics
  // address(new) = address(current) + i * sizeof(data_type)
  
  
  return 0;
}
