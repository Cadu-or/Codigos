/* Problem: 1013 - The Greatest */

#include <iostream>
#include <stdio.h>

int maiorAB(int a, int b){
  int resultado;

  resultado = ((a+b)+ abs(a-b))/2;

  return resultado;
}

int main(){
  int a, b, c, resultado, resultado2;

  std :: cin >> a >> b >> c;

  resultado = maiorAB(a, b);

  resultado2 = maiorAB(resultado, c);

  std::cout << resultado2 << " eh o maior\n";


  return 0;
}
