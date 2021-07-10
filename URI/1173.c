/* Problem: 1173 - Array fill I */

#include <stdio.h>

int main(){
    int N[10];
    int i, x;

    scanf("%d", &x);

    for(i=0; i<10; i++){

        if(i==0){
            N[i] = x;
        }else{
            N[i] = N[i-1]*2;
        }

        printf("N[%d] = %d\n", i, N[i]);

    }

    return 0;
}
