/* Problem: 1010 - Simple Calculate */

#include <iostream>
#include <string>
using namespace std;

int main() {
    int peca;
    double c, d, preco = 0;
    
    for(int i = 0; i < 2; i++){
        cin >> peca >> c >> d;
        preco = preco + (c*d);
    }
    
    cout << fixed; 
    cout.precision(2);
    cout << "VALOR A PAGAR: R$ "<< preco << endl;
    

    return 0;
}
