#include <iostream>
using namespace std;

int main() {
  unsigned long long n1 = 1;
  unsigned long long n2 = 2;
  unsigned long long x = 0;
  int suma;
  while (x <= 4000000){
    if (n2 <= 4000000 && n2 % 2  == 0){
      suma += n2;
    }
    x = n1 + n2;
    n1 = n2;
    n2 = x;
  }
  cout << suma;
}