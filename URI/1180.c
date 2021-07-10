/* Problem: 1180 - Lowest Number and Position */

#include <stdio.h>

int min(int a, int b){
    if (a < b){
        return a;
    }else{
        return b;
    }
}

int minimo(int* N, int n){
    int i;
    int mini = N[0];
    for(i=1; i < n; i++){
        mini = min(N[i], mini);
    }
    return mini;
}

int main(){
    int n, i=0, menor, h=0, ok=0;

    scanf("%d", &n);
    
    int N[n];

    for(i=0; i<n; i++){
        scanf("%d", &N[i]);
    }
    
    menor = minimo(N, n);
    printf("Menor valor: %d\n", menor);
    
    /* encontrar a posicao do valor agora */

    for(h=0; ((h < n) && (ok!=1)); h++){
        if(N[h] == menor){
            ok=1;
        }
    }
    printf("Posicao: %d\n", h-1);
    return 0;
}
