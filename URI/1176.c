/* Problem: 1176 - Fibonacci Array */

#include <stdio.h>

int main(){
    long long n, a, i;
    long long F[61];


    F[0] = 0;
    F[1] = 1;

    for(i=2; i<60; i++){
        F[i] = F[i-1] + F[i-2];
    }

    scanf("%lld", &n);    

    while(n>0){
        scanf("%lld", &a);

        if(a == 0 || a == 1){
            printf("Fib(%lld) = %lld\n", a, a);

        }else{
            F[a] = F[a-1] + F[a-2];
            printf("Fib(%lld) = %lld\n", a, F[a]);
        }
        n--;
    }
    

    return 0;
}
