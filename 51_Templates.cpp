#include <iostream>
using namespace std;
/*
Must for Competitive Programming (Template and STL)

# Templates
class  --->  object
Template(Parameterized classes)  --->   class

Why use Templates?
1. DRY
2. Generic Programming
*/

// template <class T1, class T2> // Templates with Multiple Parameters
// template <class T1=int, class T2=float, class T3=char> // Templates with default Parameters
// template <class T1, class T2> // you can do the same for functions, instead of function overloading we can use templates

/*
Member Function Templates

template <class T>
void className<T> :: display() {
  cout<<data<<endl;
}

*/
template <class T>
class vector {
  public:
  T * arr;
  int size;

  vector(int m) {
    size = m;
    arr = new T[size];
  };

  T dotProduct(vector &v) {
    T d = 0;
    for (int i = 0; i < size; i++)
    {
      d += this->arr[i] * v.arr[i];
    }
    return d;
  };
};

int main() {
  // vector <int> v1(3);
  // v1.arr[0] = 2;
  // v1.arr[1] = 5;
  // v1.arr[2] = 3;
  // vector <int> v2(3);
  // v2.arr[0] = 8;
  // v2.arr[1] = 3;
  // v2.arr[2] = 1;

  // int value = v1.dotProduct(v2);
  // cout<<value<<endl;

  // using with float
  vector <float> v1(3);
  v1.arr[0] = 2.6;
  v1.arr[1] = 5.2;
  v1.arr[2] = 3.8;
  vector <float> v2(3);
  v2.arr[0] = 1.8;
  v2.arr[1] = 0.3;
  v2.arr[2] = 1.0;

  float value = v1.dotProduct(v2);
  cout<<value<<endl;

  return 0;
}