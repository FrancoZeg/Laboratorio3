#include <iostream>
using namespace std;

bool primo(int num){
  for (int x = 2; x <= num/2; x++){
    if (num % x == 0){
      return false;
    }
  }
  return true;
}

int main() {
  int primos = 2;
  for (int x = 5;; x = x+2){
    if(primo(x)){
      primos++;
    }
    if (primos == 10001){
      cout << x;
      return 0;
    }
  }
}