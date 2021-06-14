/* Problem: 2311 - Diving */

#include <stdio.h>

void bubblesort(double V[], int n){
    int i=0, j=0;
    double aux;

    for(i=0; i<n; i++){
        for(j=0; j<n-1; j++){
            if(V[j] > V[j+1]){
                aux = V[j+1];
                V[j+1] = V[j];
                V[j] = aux;      
            }
        }
    }
}
int main(){
    char Nome[100];
    double Notas[7];
    int n, i=0, j=0, k;
    double dificuldade, soma, mult;

    scanf("%d", &n);

    for(i=0; i < n; i++){
        mult=0;
        soma=0;
        scanf("%s", Nome);
        scanf("%lf", &dificuldade);
        for(j=0; j < 7; j++){
            scanf("%lf", &Notas[j]);
        }
        bubblesort(Notas, 7);

        for(k=1; k < 6; k++){
            soma = soma + Notas[k];
        }
        mult = soma * dificuldade;
        printf("%s %.2f\n", Nome, mult);
    }

    return 0;
}
