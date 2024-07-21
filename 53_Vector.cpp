#include<iostream>
#include<vector>

using namespace std;

// cpp vector methods

template <class T>
void display(vector<T> &v) {
  for (int i = 0; i < v.size(); i++)
  {
    cout<<v[i]<<" "<<endl;
  }
}

int main() {
  vector<int> vec1; // zero length int vector
  vector<int> vec2(5); // 5 length int vector
  vector<int> vec3(vec2); // 5 length int vector from vec2
  vector<char> vec4(5, '9'); // 5 length char vector of 9s


  int size, value;
  cout<<"Enter the value of size: ";
  cin>>size;

  for (int i = 0; i < size; i++)
  {
    cout<<"Enter the value: ";
    cin>>value;
    vec1.push_back(value);
    cout<<endl;
  };
  // vec1.pop_back();

  // display(vec1);
  vector<int> :: iterator iter = vec1.begin();
  vec1.insert(iter, 4444);
  vec1.insert(iter+1, 87);
  vec1.insert(iter+1,5, 87); // it'll insert 87 5 times
  // display(vec1);
  

  return 0;
}