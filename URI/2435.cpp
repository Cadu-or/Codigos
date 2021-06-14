/* Problem: 2435 - Corrida */

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  int carro1, carro2, d, v, i;
  double t1, t2;

  cin >> carro1 >> d >> v;
  t1 = float(d) / v;
 
  cin >> carro2 >> d >> v;
  t2 = float(d) / v;
 
  if(t1 < t2){
    cout << carro1 << endl;
  }else{
    cout <<  carro2 << endl;
  }
 
  return 0;
}
