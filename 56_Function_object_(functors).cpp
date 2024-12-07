#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;
// https://en.cppreference.com/w/cpp/utility/functional
int main() {
  // Function Objects(functor): Function wrapped in a class so that it available like an object
  int arr[] = {5, 4, 6, 2, 7, 8, 1};

  sort(arr,
       arr + 5); // it'll sort the first 5 element of the array in accessing
  sort(arr, arr + 5,
       greater<int>()); // sort in descending, after passing function object
  for (int i = 0; i < 7; i++) {
    cout << arr[i] << endl;
  }

  return 0;
}

// for more algo: google it algorithms STL
