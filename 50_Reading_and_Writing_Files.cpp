#include<iostream>
#include<fstream>
#include<string>

using namespace std;

/*
These are some useful classes for working with files in C++
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
1. Using the constructor
2. Using the member function open() of the class
*/


int main(){
  string st = "This is cool";
  // Opening files using constructor and writing it
  // ofstream out("working_with_files.txt"); // Write operation
  // out<<st;
  // out.close();

  string st2;
  // Opening files using constructor and reading it
  // ifstream in("working_with_files.txt"); // Read operation
  // in>>st2; // it'll only read one word
  // getline(in, st2); // using getline(), we can get whole line
  // cout<<st2;
  // in.close();


  // 2. open() and eof() functions

  // declaring an object of the type ofstream
  ofstream out;

  //connecting the object out to the text file using the member function open()
  out.open("working_with_files.txt");

  //writing to the file
  out <<"This is me\n";
  out <<"This is also me\n";
  //closing the file connection
  out.close();

  // declaring an object of the type ifstream
  ifstream in;
  //declaring string variable st
  string st3;
  //opening the text file into in
  in.open("working_with_files.txt");
  // in>>st>>st2;
  // cout<<st<<st2;

  // giving output the string lines by storing in st until the file reaches the end of it
  while (in.eof()==0)
  {
    // using getline to fill the whole line in st
    getline(in,st3);
    cout<<st3<<endl;
  }
  in.close();

  return 0;
}
