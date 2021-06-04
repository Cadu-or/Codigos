/* Problem: 1796 - Brazilian Economy */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    int N = 0;
    int Y = 0;

    cin >> x;

    for(int i = 0; i < x; i++){
        int entrada;
        cin >> entrada;

        if(entrada == 0){
            Y++;

        }else if(entrada == 1){
            N++;

        }
    }

    if(N >= Y){
        cout << 'N' << endl;

    }else{
        cout << 'Y' << endl;
    }

    return 0;
}