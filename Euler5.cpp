#include <iostream>
using namespace std;

bool div1al20(int numero){
  for (int x = 1; x < 21; x++){
    if (numero%x != 0){
      return false;
    }
  }
  return true;
}

int main() {
  int num = 1;
  while (true){
    if (div1al20(num) == true){
      cout << num;
      break;
    }
  num++;
  }
}