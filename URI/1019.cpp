/* Problem: 1019 - Time Conversion */

#include <iostream>

using namespace std;

int main(){
    int inteiro;
    int hora, minuto, segundos;

    cin >> inteiro;

    hora = inteiro/3600;
    inteiro = inteiro%3600;
    minuto = inteiro/60;
    inteiro = inteiro%60;
    segundos = inteiro;

    cout << hora << ":" << minuto << ":" << segundos << endl; 

    return 0;
}
