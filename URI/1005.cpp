/* Problem: 1005 - Average 1 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float Media, a, b;

    cin >> a >> b;

    a = a*3.50;
    b = b*7.50;

    Media = (a+b)/ 11;

    cout << fixed;
    cout << "MEDIA = " << setprecision(5) << Media << endl;

    return 0;
}