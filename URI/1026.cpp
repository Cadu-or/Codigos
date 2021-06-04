/* Problem: 1026 - To Carry or not to Carry */

#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned int x, y;
    unsigned int r;

    while(cin >> x >> y){

        r = x xor y;

        cout << r << endl;
    }

    return 0;
}