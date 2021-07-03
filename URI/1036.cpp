/* Problem: 1036 - Bhaskara's Formula */

#include <stdio.h>
#include <math.h>

int main(){
  double a, b, c, resultado, r1, r2;
  
  scanf("%lf %lf %lf", &a, &b, &c);
  
  resultado = (b*b)-(4*a*c);
  
  if((resultado < 0)||(a == 0)){
    printf("Impossivel calcular\n");
    
  }else{
    r1 = ((-b) + sqrt(resultado))/(2*a);
    r2 = ((-b) - sqrt(resultado))/(2*a);
    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);
  }
  
  
  
  return 0;
}