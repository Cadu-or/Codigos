// Problem: 1165 - Prime Number

int primo (int n){
	int i;
	for( i = 2; i<n; i++){
		if (n%i==0){
			return 0;
		}
	}
	return 1;
}

int main (){
	int a, b;
	scanf ("%d", &a);

	while(a > 0){
		scanf ("%d", &b);
		if (primo (b) == 0){
			printf("%d nao eh primo\n", b);

		}else{
			printf("%d eh primo\n", b);
		}
		a--;
	}

	return 0; 
}
