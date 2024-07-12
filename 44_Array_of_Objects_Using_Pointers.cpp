#include <iostream>
using namespace std;

class StoreItem {
  int id, price;
  public:
    void setDetails(int a, int b) {
      id = a;
      price = b;
    }

    void getDetails(void) {
      cout<<"The price of id: "<<id<<" is "<<price<<endl;
    }
};

int main() {
  int SIZE = 3;

  // Creating array of objects size of SIZE
  StoreItem *store_pointer = new StoreItem[SIZE];
  int a, b;

  for (int i = 0; i < SIZE; i++)
  {
    cout<<"Enter the id and price of item "<<(i+1)<<endl;
    cin>>a>>b;
    (store_pointer + i)->setDetails(a, b);
  }

  for (int i = 0; i < SIZE; i++)
  {
    (store_pointer + i)->getDetails();
  }

  return 0;
}