#include <iostream>
using namespace std;

class BankDeposit {
  int principal;
  int year;
  float interestRate;
  float returnValue;

  public:
    BankDeposit() {};
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show(void);
};

BankDeposit :: BankDeposit(int p, int y, float r) {
  cout<<"rate is "<<r<<endl;
  principal = p;
  year = y;
  interestRate = r;
  returnValue = principal;

  for (int i = 0; i < year; i++)
  {
    returnValue = returnValue * (1 + interestRate);
  }

  cout<<"returnedValue is "<<returnValue<<" rate "<<interestRate<<endl;
};
BankDeposit :: BankDeposit(int p, int y, int r) {
  principal = p;
  year = y;
  interestRate = float(r)/100;
  returnValue = principal;

  for (int i = 0; i < year; i++)
  {
    returnValue = returnValue * (1 + interestRate);
  }
};

void BankDeposit :: show() {
  cout<<"Principal amount want "<<principal
      <<" Return value after "<<year
      <<" years is "<<returnValue<<endl;
}

int main () {
  BankDeposit b1; // to initializing it like that we need a constructor which accept no arguments
  int p, y, R;
  float r;

  cout<<"enter the value of p, y, r"<<endl;
  cin>>p>>y>>r;

  b1 = BankDeposit(p, y, r);
  b1.show();


  cout<<"enter the value of p, y, R"<<endl;
  cin>>p>>y>>R;

  BankDeposit b2 = BankDeposit(p, y, R); // no need a constructor which accept no arguments
  b2.show();

  return 0;
}