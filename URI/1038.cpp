/* Problem: 1038 - Snack */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int numero, quantidade;
    enum comida {CachorroQuente = 1, Xsalada, Xbacon, TorradaSimples, Refrigerante};

    cin >> numero >> quantidade;

    cout << fixed << setprecision(2);
    if(numero == CachorroQuente){
        cout << "Total: R$ " << quantidade*4.00 << endl;

    }else if(numero == Xsalada){
        cout << "Total: R$ " << quantidade*4.50 << endl;

    }else if(numero == Xbacon){ 
        cout << "Total: R$ " << quantidade*5.00 << endl;
    
    }else if(numero == TorradaSimples){
        cout << "Total: R$ " << quantidade*2.00 << endl;
    
    }else if(numero == Refrigerante){
        cout << "Total: R$ " << quantidade*1.50 << endl;

    }


    return 0;
}
