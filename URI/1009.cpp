/* Problem: 1009 - Salary with Bonus */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    double c, d, salario;
    
    cin >> nome >> c >> d;
    
    salario = c + ((d*15)/100);
    
    cout << fixed; 
    cout.precision(2);
    cout << "TOTAL = R$ "<< salario << endl;
    

    return 0;
}
