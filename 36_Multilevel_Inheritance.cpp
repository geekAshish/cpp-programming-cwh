#include <iostream>
using namespace std;

class Student {
  protected:
    int roll_number;
  public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student :: set_roll_number(int n) {
  roll_number = n;
}

void Student :: get_roll_number() {
  cout<<"The roll number is : "<<roll_number<<endl;
}

class Exam : public Student {
  protected:
    float math;
    float physics;
  public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam :: set_marks(float m, float p) {
  math = m;
  physics = p;
}

void Exam :: get_marks() {
  cout<<"Math marks is : "<<math<<endl;
  cout<<"And physics marks is : "<<physics<<endl;
}

class Result : public Exam {
  float percentage;
  public:
    void display_result() {
      get_roll_number();
      get_marks();
      cout<<"Your result is "<<(math + physics)/2<<"%"<<endl;
    }
};

int main() {
  /*
  Notes:
    If we are inheriting B from A and C from B: [ A ---> B ---> C ]
    1. A is the base class for B and B is the base class for C
    2. A --> B --> C is called Inheritance Path
  */

  Result s1;
  s1.set_roll_number(225);
  s1.set_marks(98, 89);
  s1.display_result();

  return 0;
}