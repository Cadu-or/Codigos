/* Problem: 1002 - Area of a Circle */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double area, n = 3.14159, raio;
    cin >> raio;

    area = (raio*raio) * n;

    cout << fixed;
    cout << "A=" << setprecision(4) << area << '\n';

    return 0;
}