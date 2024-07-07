#include <iostream>
using namespace std;

class HindiGreat {
  public:
    void greet() {
      cout<<"Kaise Ho?"<<endl;
    }
};

class EnglishGreat {
  public:
    void greet() {
      cout<<"How are you?"<<endl;
    }
};

class DerivedClass : public HindiGreat, public EnglishGreat {
  int a;
  public:
    void greet() { // DerivedClass greet() method will over write there base class methods
      HindiGreat :: greet(); //Ambiguity Resolution, Here it'll use HindiGreet Class
    }
};

int main() {
  HindiGreat hg;
  EnglishGreat eg;
  hg.greet();
  eg.greet();

  DerivedClass dc;
  dc.greet();

  return 0;
}