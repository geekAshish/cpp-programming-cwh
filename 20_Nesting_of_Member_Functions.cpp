#include <iostream>
#include <string>  // string library provides string methods
using namespace std;

// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declaration like this:
/* class Employee{
  // Class definition
} harry, joe, dev; */
// harry.salary = 8 makes no sense if salary is private


// Nesting of member functions

class Binary {
  private:
    string s;
    void chk_bin(void);

  public:
    void read(void);
    // void chk_bin(void); // you could also put in private
    void ones();
    void write();
};

void Binary :: read(void) {
  cout<<"Enter a binary number"<<endl;
  cin>>s;
};

void Binary :: chk_bin(void) {
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) != '0' && s.at(i) != '1')
    {
      cout<<"Incorrect binary format"<<endl;
      exit(0); // what is exit(0) here?
    }
  }
};

void Binary :: ones() {
  chk_bin(); // nesting function calling

  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) == '0')
    {
      s.at(i) = '1';
    } else {
      s.at(i) = '0';
    }
  }
}

void Binary :: write() {
    cout<<"Writing Binary"<<endl;
    cout<<s<<endl;
}

int main()
{
  Binary b;

  b.read();
  // b.chk_bin(); // you can also call it in ones method
  b.ones();
  b.write();

  return 0;
}
