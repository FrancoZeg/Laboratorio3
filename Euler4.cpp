#include <iostream>
using namespace std;

int reves(int n){
    int Nreves=0;
    int resto =0;
    while(n!=0){
        resto = n%10;
        Nreves = Nreves*10 + resto;
        n /= 10;
    }
    return Nreves;
}

bool get_palindromo(int num){
    if(reves(num) == num){
        return true;
    }
    else{
        return false;
    }
}

int main() {
  int multi;
  int maximo = 0;
  for(int x = 100; x < 1000; x++){
    for(int y = 100; y < 1000; y++){
      multi = x * y;
      if (get_palindromo(multi) && maximo < multi){
        maximo = multi;
      }
    }
  }
  cout << maximo << endl; 
}