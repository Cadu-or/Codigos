/* Problem: 1020 - Age in Days */

#include <iostream>

using namespace std;

int main(){
    int dia, mes, ano;
    int inteiro;

    cin >> inteiro;

    ano = inteiro/365;
    inteiro = inteiro%365;
    mes = inteiro/30;
    inteiro = inteiro%30;
    dia = inteiro;

    cout << ano << " ano(s)" << endl << mes << " mes(es)" << endl << dia << " dia(s)" << endl;


    return 0;
}
