/* Problem: 1120 - Contract Revision */

#include <bits/stdc++.h>

using namespace std;

int main(){
    char digit;
    string number;

    while(cin >> digit >> number and (digit != '0' and number != "0")){
        bool flag = false;

        for(int i = 0; i < number.length(); i++){
            if(digit != number[i] and (flag or number[i] != '0')){
                cout << number[i];
                flag = true;
            }
        }

        if(flag == false) cout << '0';

        cout << endl;
    }

    return 0;
}