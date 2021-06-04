/* Problem: 1238 - Combiner */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int loop;

    cin >> loop;

    for(int i = 0; i < loop; i++){
        string str1;
        string str2;
        string answ;
        int aux;

        cin >> str1 >> str2;
        
        int total = str1.length() + str2.length();

        if(str2.length() > str1.length()){
            aux = str1.length();
            int j = 0;
            int k = 0;
            while(j < aux){
                answ[k] = str1[j];
                k++;
                answ[k] = str2[j];
                k++;
                j++;
            }
            while(k < total){
                answ[k] = str2[j];
                j++;
                k++;
            }

        }else if(str1.length() > str2.length()){
            aux = str2.length();
            int j = 0;
            int k = 0;
            while(j < aux){
                answ[k] = str1[j];
                k++;
                answ[k] = str2[j];
                k++;
                j++;
            }
            while(k < total){
                answ[k] = str1[j];
                j++;
                k++;
            }

        }else{
            int j = 0;
            int k = 0;
            while(j < total){
                answ[k] = str1[j];
                k++;
                answ[k] = str2[j];
                k++;
                j++;
            }
        }

        for(int m = 0; m < total; m++){
            cout << answ[m];
        }

        cout << endl;
    }

    return 0;
}