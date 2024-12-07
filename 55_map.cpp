#include <iostream>
#include <map>
#include <string>

using namespace std;

// map is an associative array
int main() {
  map<string, int> marksMap;
  marksMap["Ashish"] = 99;
  marksMap["Kushwaha"] = 13;
  marksMap["GuruJi"] = 3;

  marksMap.insert({{"hanuashi", 100}, {"kazama", 89}});

  // creating an iterator
  map<string, int>::iterator iter;

  for (iter = marksMap.begin(); iter != marksMap.end(); iter++) {
    cout << (*iter).first << " " << (*iter).second << endl;
  };

  return 0;
}