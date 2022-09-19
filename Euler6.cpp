#include <iostream>
using namespace std;

int cuadrado(int num){
  int cuadrado = num * num;
  return cuadrado;
}

int main() {
  int cuadrados = 0;
  int sum = 0;
  for (int x = 1; x < 101; x++){
    cuadrados += cuadrado(x);
  }
  for (int y = 1; y < 101; y++){
    sum += y; 
  }
  cout << cuadrado(sum) - cuadrados << endl;
}