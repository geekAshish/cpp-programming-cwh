#include <iostream>
using namespace std;

class Base {
  private:
    int a;

  protected: // can be inherited
    int b;
};

/*

For a Protected Members

                      Public Derivation         Public Derivation         Protected Derivation
Private Members       Not Inherited             Not Inherited             Not Inherited
Protected Members     Protected                 Private                   Protected
Public Members        Public                    Private                   Protected

*/

class Derived : Base {

};

int main() {


  return 0;
}