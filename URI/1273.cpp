/* Problem: 1273 - Justifier */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int flag = 0;
    int loop;

    while(1){
        cin >> loop;
        int maxsize = 0;

        vector <string> palavras;

        if(loop == 0) break;
        if(flag == 1) cout << endl;

        for(int i = 0; i < loop; i++){
            string world;
            cin >> world;

            if(world.length() > maxsize){
                maxsize = world.length();
            }
            palavras.push_back(world);
        }

        for(int i = 0; i < loop; i++){
            if(maxsize > palavras[i].length()){
                int auxiliar = maxsize - palavras[i].length();
                for(int j = 0; j < auxiliar; j++){
                    cout << ' ';
                }
                cout << palavras[i] << endl;

            }else{
                cout << palavras[i] << endl;

            }
        } 

        flag = 1;
    }

    return 0;
}