/* Problem: 1272 - Hidden Message */

#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    int loop;

    cin >> loop;
    getchar();

    while(loop--){
        int contador = 0;
        string ans;
        getline(cin, str);

        if(str[0] >= 'a' and str[0] <= 'z'){
            ans[0] = str[0];
            contador++;
        }

        for(int i = 1; str[i] != '\0'; i++){
            if(str[i-1] == ' ' and str[i] != ' '){
                ans[contador] = str[i];
                contador++;
            }
        }

        for(int i = 0; i < contador; i++){
            cout << ans[i];
        }

        cout << endl;
    }

    return 0;
}