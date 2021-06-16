/* Problem: 1018 - Banknotes */

#include <iostream>

using namespace std;

int main(){
    int notas;
    int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;
    int dinheiro, dinheiro1;

    cin >> dinheiro;

    dinheiro1 = dinheiro;

    if(dinheiro >= 100){
        cem = dinheiro/100;
        dinheiro = dinheiro - (cem*100);
    }
    if(dinheiro >= 50){
        cinquenta = dinheiro/50;
        dinheiro = dinheiro - (cinquenta*50);
    }

    if(dinheiro >= 20){
        vinte = dinheiro/20;
        dinheiro = dinheiro - (vinte*20);
    }

    if(dinheiro >= 10){
        dez = dinheiro/10;
        dinheiro = dinheiro - (dez*10);
    }

    if(dinheiro >= 5){
        cinco = dinheiro/5;
        dinheiro = dinheiro - (cinco*5);
    }

    if(dinheiro >= 2){
        dois = dinheiro/2;
        dinheiro = dinheiro - (dois * 2);
    }

    if(dinheiro >= 1){
        um = dinheiro/1;
        dinheiro = dinheiro - (um * 1);
    }

    cout << dinheiro1 << endl;
    cout << cem << " nota(s) de R$ 100,00" << endl;
    cout << cinquenta << " nota(s) de R$ 50,00" << endl;
    cout << vinte << " nota(s) de R$ 20,00" << endl;
    cout << dez << " nota(s) de R$ 10,00" << endl;
    cout << cinco << " nota(s) de R$ 5,00" << endl;
    cout << dois << " nota(s) de R$ 2,00" << endl;
    cout << um << " nota(s) de R$ 1,00" << endl;

    return 0;
}
