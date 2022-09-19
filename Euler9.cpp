#include <iostream>
using namespace std;

int main() {
  for (int a = 1; a < 333; ++a){
    int b = a + 1;
    int c = 1000 - a - b; 
    while (a*a + b*b < c*c){
      ++b;
      --c;
    }
    if (a*a + b*b == c*c){
        cout << a << " " << b << " " << c << endl;
        cout << a*b*c <<endl;
    }
  }
}
