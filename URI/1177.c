/* Problem: 1177 - Array Fill II */

#include <stdio.h>

int main(){
    int A[1000];
    int T, i=0, k=0;

    scanf("%d", &T);

    for(i=0; i<1000; i++){
        A[i] = k;
        if(k >= T){
            k = 0;
            A[i] = k;
        }
        k++;
        printf("N[%d] = %d\n", i, A[i]);
    }

    return 0;
}
