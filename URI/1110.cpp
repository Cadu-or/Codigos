/* Problem: 1110 - Throwing Cards Away */

#include <iostream>
#include <queue>

using namespace std;

int main(){
    int primeiro, numero, print;
    queue<int> fila;
    queue<int> filadiscard;

    while(1){

        cin >> numero;

        if(numero == 0){
            break;
        }

        for(int i = 1; i <= numero; i++){
            fila.push(i);
        }

        while(!fila.empty()){
            if(fila.front() != fila.back()){
                primeiro = fila.front();
                filadiscard.push(primeiro);
                fila.pop();
                primeiro = fila.front();
                fila.push(primeiro);
                fila.pop();
            }else{
                primeiro = fila.front();
                fila.pop();
            }
        }
        cout << "Discarded cards: ";
        for(int i = 0; i < numero-2; i++){
            print = filadiscard.front();
            filadiscard.pop();
            cout << print << ", ";
        }
        cout << filadiscard.front() << endl;
        filadiscard.pop();
        cout << "Remaining card: " << primeiro << endl;


    }
    return 0;
}
