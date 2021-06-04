/* Problem: 1168 - LED */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int tests;

    cin >> tests;

    while(tests--){
        string digitos;
        long long int soma = 0;
        cin >> digitos;

        for(int i = 0; i < digitos.length(); i++){
            if(digitos[i] == '1'){
                soma = 2 + soma;

            }else if(digitos[i] == '2'){
                soma = 5 + soma;

            }else if(digitos[i] == '3'){
                soma = 5 + soma;

            }else if(digitos[i] =='4'){
                soma = 4 + soma;

            }else if(digitos[i] == '5'){
                soma = 5 + soma;

            }else if(digitos[i] == '6'){
                soma = 6 + soma;

            }else if(digitos[i] == '7'){
                soma = 3 + soma;

            }else if(digitos[i] == '8'){
                soma = 7 + soma;

            }else if(digitos[i] == '9'){
                soma = 6 + soma;

            }else if(digitos[i] == '0'){
                soma = 6 + soma;
            }
        }

        cout << soma << " leds" << endl;
    }


    return 0;
}