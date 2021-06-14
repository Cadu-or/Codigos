/* Problem: 2378 - Elevator */

#include <iostream>

using namespace std;

int main(){
    int A, B, entram, flag =0, retiram, pessoas = 0;

    cin >> A >> B;

    for(int i = 0; i < A; i++){
        cin >> retiram >> entram;
        pessoas = pessoas - retiram;
        pessoas = pessoas + entram;
        if(pessoas > B){
            flag = 1;
        }
    }

    if(flag == 1){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

    return 0;
}
