#include <iostream>
using namespace std;

// OVERVIEW - INHERITANCE IN C++
// 1. Reusability is a very important feature of OOPs
// 2. In C++ we can reuse a class and add additional features to it
// 3. Reusing classes saves time and money
// 4. Reusing already tested and debugged class will save a lot of effort of
//    developing and debugging the same thing again.

// WHAT IS INHERITANCE IN C++
// 1. The concept of Reusability in C++ is supported using Inheritance
// 2. We can reuse the properties of an existing class by inheriting from it
// 3. The existing class is called as the Base Class
// 4. The new class which is inherited is called as the Derived Class
// 5. Reusing classes saves time and money
// 6. There are different types of inheritance in C++

// FORMS OF INHERITANCE IN C++
// 1. Simple Inheritance
// 2. Multiple Inheritance
// 3. Hierarchical Inheritance
// 4. Multilevel Inheritance
// 5. Hybrid Inheritance

// SINGLE INHERITANCE IN C++
// A derived class with only one Base Class
// Employee --> Programmer, Programmer class is derived from Employee class

// MULTIPLE INHERITANCE IN C++
// A derived class with more than one Base class
// Employee  -->
//               --> Programmer
// Assistant -->

// HIERARCHICAL INHERITANCE IN C++
// Several derived classes from a single base class
// Employee --> Programmer
// Employee --> Manager

// MULTILEVEL INHERITANCE IN C++
// Deriving a class from already derived class
// Animal --> mammal --> human

// HYBRID INHERITANCE IN C++
// Hybrid inheritance is a combination of multiple inheritance and multilevel inheritance.
// A class is derived from two classes as in multiple inheritance.
// However, one of the parent classes is not a base class.
//            --> Mammal
// Animal -->            --> Bat
//            --> Bird

int main() {


  return 0;
}