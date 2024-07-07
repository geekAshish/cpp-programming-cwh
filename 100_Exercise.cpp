#include <cmath>
#include <iostream>
using namespace std;

class SimpleCalculator {

  public:
    int add(int n, int m) {
      return n + m;
    }
    
    int subtract(int n, int m) {
      return n - m;
    }

    int multiply(int n, int m) {
      return n * m;
    }

    float devid(int n, int m) {
      return float(n) / float(m);
    }
};
class ScientificCalculator {

  public:
    int sin_value(float n) {
      return 0;
    }
    
    int subtract(int n, int m) {
      return n - m;
    }

    int multiply(int n, int m) {
      return n * m;
    }

    float devid(int n, int m) {
      return float(n) / float(m);
    }
};

int main() {



  return 0;
}