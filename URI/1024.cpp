/* Problem: 1024 - Encryption */

#include <iostream>
#include <string>

using namespace std;

string primeirapassada(string str){
    int i =0;
    while(str[i] != 0){
        if((str[i] >= 'a' && str[i] <= 'z')|| (str[i] >= 'A' && str[i] <= 'Z')){
            str[i] = str[i]+3; 
        }
        i++;
    }
    return str;
}

string terceirapassada(string str){
    int n = str.length();
    int i = 0;

    i = (n/2);

    while(i <= n){
        str[i] = str[i]-1;
        i++;
    }

    return str;
}

string segundapassada(string str){ 
    int n = str.length();
    char aux;

    for (int i = 0; i < (n / 2); i++){
        aux = str[i]; 
        str[i] = str[n - i - 1];
        str[n-i-1] = aux; 
    }

    return str;
} 


int main(){
    int loop, numero, j, c;
    char aux, aux2;
    string str;
    cin >> loop;
    cin.ignore();

    for(int i = 0; i < loop; i++){
        getline(cin, str);
        str = primeirapassada(str);
        str = segundapassada(str);
        str = terceirapassada(str);
        cout << str << endl;

    }


    return 0;
}
