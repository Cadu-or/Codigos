/* Problem: 1037 - Interval */

#include <iostream>

using namespace std;

int main(){
    float numero;

    cin >> numero;
    
    if(numero >= 0.00 && numero <= 25.00){
        cout << "Intervalo [0,25]" << endl;

    }else if(numero > 25.00 && numero <= 50.00){
        cout << "Intervalo (25,50]" << endl;

    }else if(numero > 50.00 && numero <= 75.00){
        cout << "Intervalo (50,75]" << endl;

    }else if(numero > 75.00 && numero <= 100.00){
        cout << "Intervalo (75,100]" << endl;
        
    }else{
        cout << "Fora de intervalo" << endl;

    }

    return 0;
}
