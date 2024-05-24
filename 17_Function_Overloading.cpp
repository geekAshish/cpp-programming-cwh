#include <iostream>

using namespace std;

// volume of cylinder
int volume(int r, int h) {
  return (3.14 * r*r*h);
}

// volume of cube
int volume(int a) {
  return (a * a * a);
}

// volume of rectangular
int volume(int l, int b, int h) {
  return (l * b * h);
}

int main()
{
  cout<<"the volume of the cylinder: "<<volume(5, 6)<<endl;
  cout<<"the volume of the cube: "<<volume(5)<<endl;
  cout<<"the volume of the rectangular: "<<volume(5, 6, 8)<<endl;
  
  return 0;
}
