#include <iostream>

using namespace std;
int main()
{
  cout<<"Control Structure"<<endl;
  // Basic Control Structure
  // Sequence structure : entry ---> action1 ---> action2 ---> exit
  // Selection structure : entry  ---> true/false ---> action ---> exit
  // Loop Structure : entry ---> loop ---> true ---> loop again ---> false ---> exit


  cout<<"IF Else and Switch statement"<<endl;
  int a;
  cin>>a;

  // IF Else
  // if (a > 18)
  // {
  //   cout<<"a is greater then 18"<<endl;
  // } else if (a == 18)
  // {
  //   cout<<"a is equal to 18"<<endl;
  // } else {
  //   cout<<"a is smaller then 18"<<endl;
  // }


  // Switch statement
  switch (a)
  {
  case 18:
    cout<<"a is 18"<<endl;
    break;

  case 19:
    cout<<"a is 19"<<endl;
    break;

  case 2:
    cout<<"a is 2"<<endl;
    break;
  
  default:
    cout<<"a have not any value"<<endl;
    break;
  }

  
  return 0;
}
