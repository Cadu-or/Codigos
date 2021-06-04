/* Problem: 1249 - Rot13 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;

    while(getline(cin, str)){
        int tamanho = str.length();
        for(int i = 0; i < tamanho; i++){
            if((str[i] >= 65 and str[i] <= 77) or (str[i] >= 97 and str[i] <= 109)){
                str[i] = str[i] + 13;

            }else if ((str[i] >= 78 and str[i] <= 90) or (str[i] >= 98 and str[i] <= 122)){
                str[i] = str[i] - 13;

            }
        }
        
        cout << str << endl;
    }

    return 0;
}