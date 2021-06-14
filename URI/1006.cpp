/* Problem: 1006 - Average 2 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float Media, a, b, c;

    cin >> a >> b >> c;

    a = a*2;
    b = b*3;
    c = c*5;

    Media = (a+b+c)/ 10;

    cout << fixed;
    cout << "MEDIA = " << setprecision(1) << Media << endl;

    return 0;
}
