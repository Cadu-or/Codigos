/* Problem: 1241 - Fit or Dont Fit II */

#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    string str2;
    int loop;

    cin >> loop;

    while(loop--){
        bool flag = true;
        cin >> str >> str2;

        if(str.length() < str2.length()){
           cout << "nao encaixa" << endl;

        }else if (str.length() > str2.length()){
            int tamanho = (str.length() - str2.length());
            int j = 0;

            for(int i = tamanho; i < str.length(); i++){
                if(str[i] != str2[j]){
                    flag = false;
                    break;
                }
                j++;
            }

            if(flag == false) cout << "nao encaixa" << endl;
            else cout << "encaixa" << endl;

        }else if(str.length() == str2.length()){
            if(str == str2){
                cout << "encaixa" << endl;

            }else{
                cout << "nao encaixa" << endl;

            }
        }
    }


    return 0;
}