/* Problem: 1011 - Sphere */

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
    const static double pi = 3.14159;
    double raio, potencia;
    double volume;
    
    cin >> raio;
    
    potencia = pow(raio,3);
    volume = (4.0/3)*potencia*pi;
    
    cout << fixed; 
    cout.precision(3);
    cout << "VOLUME = "<< volume << endl;
    

    return 0;
}
