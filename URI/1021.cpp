/* Problem: 1021 - Banknotes and Coins */

#include <iostream>

using namespace std;

int main(){
    float preco;
    int nota100 = 0;
    int nota50 = 0;
    int nota5 = 0; 
    int nota20 = 0;
    int nota2 = 0;
    int nota10 = 0;
    int moeda50 = 0;
    int moeda100 = 0;
    int moeda25 = 0;
    int moeda10 = 0;
    int moeda5 = 0;
    int moeda1 = 0;
    
    int loop = 0;

    cin >> preco;
    preco = preco + 0.001;

    while(preco >= 100){
        preco = preco - 100;
        nota100++;
    }

    while(preco >= 50){
        preco = preco - 50;
        nota50++;
    }

    while(preco >= 20){
        preco = preco - 20;
        nota20++;
    }

    while(preco >= 10){
        preco = preco - 10;
        nota10++;
    }

    while(preco >= 5){
        preco = preco - 5;
        nota5++;
    }

    while(preco >= 2){
        preco = preco -2;
        nota2++;
    }

    while(preco >= 1.00){
        preco = preco - 1.00;
        moeda100++;
    }

    while(preco >= 0.50){
        preco = preco - 0.50;
        moeda50++;
    }

    while(preco >= 0.25){
        preco = preco - 0.25;
        moeda25++;
    }

    while(preco >= 0.1){
        preco = preco - 0.1;
        moeda10++;
    }

    while(preco >= 0.05){
        preco = preco - 0.05;
        moeda5++;
    }

    while(preco > 0.01){
        preco = preco - 0.01;
        moeda1++;
    }

    cout << "NOTAS:" << endl;
    cout << nota100 << " nota(s) de R$ 100.00" << endl;
    cout << nota50 << " nota(s) de R$ 50.00" << endl;
    cout << nota20 << " nota(s) de R$ 20.00" << endl;
    cout << nota10 << " nota(s) de R$ 10.00" << endl;
    cout << nota5 << " nota(s) de R$ 5.00" << endl;
    cout << nota2 << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << moeda100 << " moeda(s) de R$ 1.00" << endl;
    cout << moeda50 << " moeda(s) de R$ 0.50" << endl;
    cout << moeda25 << " moeda(s) de R$ 0.25" << endl;
    cout << moeda10 << " moeda(s) de R$ 0.10" << endl;
    cout << moeda5 << " moeda(s) de R$ 0.05" << endl;
    cout << moeda1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}