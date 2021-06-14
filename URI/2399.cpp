/* Problem: 2399 - Campo Minado */

#include <iostream>
#include <string>

using namespace std;

int main (){
    char caractere;
    int loop;
    int contador = 0;

    cin >> loop;  
    
    char str[loop];
    for(int i = 0; i < loop; i++){
        cin >> caractere;
        str[i] = caractere;
    }

    for(int i = 0; i < loop; i++){
        if(str[i-1] == '1'){
            contador = contador +1;
        }
        if(str[i] == '1'){
            contador = contador +1;
        }
        if(str[i+1] == '1'){
            contador = contador + 1;
        }

        cout << contador << endl;
        contador = 0;
    }

    return 0;
}
