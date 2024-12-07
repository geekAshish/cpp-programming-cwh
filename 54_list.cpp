#include <iostream>
#include <list>
using namespace std;
// https://en.cppreference.com/w/cpp/container/list

void display(list<int> &lst) {
  list<int>::iterator itr; // creating an iterator
  // itr = lst.begin(); // now this iterator pointing to the address first
  // element of the list

  for (itr = lst.begin(); itr != lst.end(); itr++) {
    cout << *itr << " ";
  }
  cout << endl;
};

int main() {
  list<int> list1; // empty list
  list1.push_back(4);
  list1.push_back(2);
  list1.push_back(7);
  list1.push_back(1);
  list1.sort();
  list1.reverse();
  display(list1);

  // list1.pop_back();
  // display(list1);
  // list1.pop_front();
  // display(list1);
  // list1.remove(2); // remove all occurrences from list
  // display(list1);

  list<int> list2(7); // Empty list of size 7
  // create an iterator
  list<int>::iterator itr2;
  // pointing itr2 to the first element of the list2
  itr2 = list2.begin();

  *itr2 = 44;
  cout << *itr2 << endl;

  itr2++;     // now pointing to the second element
  *itr2 = 42; // assigning value to 2nd element
  cout << *itr2 << endl;

  // resizing list
  list2.resize(3);
  display(list2);

  // merging two lists
  list1.merge(list2);
  display(list1);
}
