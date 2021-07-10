/* Problem: 1175 - Array change I */

#include <stdio.h>

int main(){
    int A[20];
    int i=19, j=0;

    for(i=19; i>=0; i--){
        scanf("%d", &A[i]);
    }
    for(j=0; j<20; j++){
        printf("N[%d] = %d\n", j, A[j]);
    }
    return 0;
}
