/* Problem: 1042 - Simple Sort */

#include <iostream>

using namespace std;

void selectionsort(float vetor[]){
    float aux;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            if(vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }

    }

}

int main(){
    int numero;
    float vetor[3];
    float vetor2[3];

    for(int i = 0; i < 3; i++){
        cin >> numero;
        vetor[i] = numero;
        vetor2[i] = numero;
    }

    selectionsort(vetor);

    for(int i = 0; i < 3; i++){
        cout << vetor[i] << endl;
    }

    cout << endl;

    for(int i =0; i < 3; i++){
        cout << vetor2[i] << endl;
    }
    


    return 0;
}
