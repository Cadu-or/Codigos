/* Problem: 1178 - Array Fill III */

#include <stdio.h>

int main(){
    double x, A[100];
    int i;

    scanf("%lf", &x);
    
    for(i=0; i<100; i++){
        if(i==0){
            A[i] = x;
        }else{
        A[i] = x/2;
        x = x/2;
        }
            
        printf("N[%d] = %.4f\n", i, A[i]);
    }

    return 0;
}
