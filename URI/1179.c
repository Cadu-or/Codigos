// Problem: 1179 - Array Fill IV

#include <stdio.h>

int main (){
    int i=0, n=0, l=0, k=0, m=0, c=0; 
    int par[5], impar[5];

    for(i=0; i<15; i++){
        scanf("%d", &n);
        if(n%2 == 0){
            par[k] = n;
            k++;
            if(k == 5){
                for(m=0; m < 5; m++){  
                    printf("par[%d] = %d\n", m, par[m]);
                }
                k=0;
            }
        }else{
            impar[l] = n;
            l++;
            if(l == 5){
                for(m=0; m < 5; m++){
                    printf("impar[%d] = %d\n", m, impar[m]);
                }
                l=0; 
            }
        }
    }
    for(c=0; c<l; c++){
        printf("impar[%d] = %d\n", c, impar[c]);
    }
    for(c=0; c<k; c++){
        printf("par[%d] = %d\n", c, par[c]);
    }

    return 0;
}
