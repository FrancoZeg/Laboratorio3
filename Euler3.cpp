#include <iostream>
using namespace std;

int main() {
  unsigned long long x = 600851475143;
  int divisor = 2;
  while (divisor*divisor < x){
    if ((x % divisor) == 0){
      x /= divisor; 
    }
    ++ divisor;
  }
  cout << "El divisor primo más alto es: "<< x << endl;
}