#include<stdio.h>

	void binario(int n){
		if(n==1){
			printf("1");
			return;
		}
		int resto;
		resto = n%2;
		binario(n/2);
		printf("%d",resto);
	}
	
	int main(){
	
        printf("Digite um numero para converter em binario: ");
        int numero; 
        
        scanf("%d",&numero);
        
		binario (numero);
	}