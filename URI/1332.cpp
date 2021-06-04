/* Problem: 1332 - One-Two-Three */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int number;
    cin >> number;

    for(int i = 0; i < number; i++){
        string str;
        cin >> str;
        if(str.length() == 5){
            cout << "3" << endl;

        }else{
            if((str[0] == 'o' and str[1] == 'n') or (str[0] == 'o' and str[2] == 'e') or (str[1] == 'n' and str[2] == 'e')){
                cout << "1" << endl;
            }else{
                cout << "2" << endl;
            }
        }
    }


    return 0;
}