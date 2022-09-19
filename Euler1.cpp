#include <iostream>
using namespace std;

int main() {
  int suma = 0;
  for (int x = 1; x < 1000; x = x + 1) {
    if (x % 3 == 0) {
      suma = x + suma;
    }
    if (x % 5 == 0 && x % 3 != 0){
      suma = x + suma;
    }
  }
  cout << "La suma es: " << suma;
}