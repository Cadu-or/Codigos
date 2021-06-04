/* Problem: 1222 - Short Story Competition */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, L, C;

    while(scanf("%d %d %d", &N, &L, &C) != EOF){
        
        int soma = 0;
        int contador = 0;
        int ans;
        int flag = 0;


        vector <int> texto;

        for(int i = 0; i < N; i++){
            string palavra;
            cin >> palavra;
            texto.push_back(palavra.length());
        }

        
        /*for(int i = 0; i < N; i++){
            cout << texto[i] << " ";
        }
        cout << endl;*/

        soma = texto[0]+1;

        for(int i = 0; i < N; i++){
            if(flag == 1){
                soma = texto[i]+1;
            }

            flag = 0;

            if(texto[i+1] + soma <= C){
                soma = soma + texto[i+1] + 1;
                //cout << soma << endl;

            }else{
                contador++;
                //cout << "zerou" << endl;
                flag = 1;
                soma = 0;
            }
        }

        if(soma != 0){
            contador++;
        }

        ans = contador/L;

        if(contador % L != 0){
            ans++;
        }

        cout << ans << endl;
        
    }

    return 0;
}