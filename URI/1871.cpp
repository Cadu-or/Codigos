/* Problem: 1871 - Zero means Zero */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y;
    int soma;

    while(cin >> x >> y and (x != 0 and y != 0)){
        soma = x + y;

        string ans = to_string(soma);

        for(int i = 0; i < ans.length(); i++){
            if(ans[i] != '0'){
                cout << ans[i];
            }
        }

        cout << endl;
    }

    return 0;
}