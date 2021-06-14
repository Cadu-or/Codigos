/* Problem: 1008 - Salary */

#include <iostream>
using namespace std;

int main() {
    int a,b;
    float c, salario;
    
    cin >> a >> b >> c;
    
    salario = (b*c);
    
    cout << "NUMBER = " << a << endl;
    cout << fixed; 
    cout.precision(2);
    cout << "SALARY = U$ "<< salario << endl;
    

    return 0;
}
