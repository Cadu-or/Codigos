/*Problem: 1153 - Simple Factorial */

#include <stdio.h>

int fat(int n) {
	int ret = 1, i;
	if (n == 0){
		return 1;
	}
	for (i = 2; i <= n; i++){
		ret = (ret*i);
	}
	return ret;
}

int main(){
	int a, resultado;
	scanf("%d", &a);
	resultado=fat(a);
	printf("%d\n", resultado);
	return 0;
}
