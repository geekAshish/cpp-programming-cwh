#include <iostream>
using namespace std;

class Shop {
  private:
    int counter;
    string itemName[100];
    int itemPrice[100];

  public:
    void intCounter() {counter = 0;};
    void setItem();
    void displayItem();
};

void Shop :: setItem() {
  cout<<"Enter the Name of item "<<counter + 1<<endl;
  cin>>itemName[counter];
  cout<<"Enter the price of item "<<counter + 1<<endl;
  cin>>itemPrice[counter];

  counter++;
};

void Shop :: displayItem() {
  for (int i = 0; i < counter; i++)
  {
    cout<<"Price of "<<itemName[i]<<" is "<<itemPrice[i]<<endl;
  }
}

int main()
{
  Shop secondShop;

  secondShop.intCounter();
  secondShop.setItem();
  secondShop.setItem();
  secondShop.setItem();
  secondShop.displayItem();
  
  return 0;
}
