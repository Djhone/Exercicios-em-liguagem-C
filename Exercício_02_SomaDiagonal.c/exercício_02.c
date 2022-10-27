#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define tam 4
	int main(){
		
		srand(time(NULL));
		int m[tam][tam],i,j,soma;
		
		for(i=0;i<tam;i++){
			for(j=0;j<tam;j++){
				m[i][j]=rand()%10;
			}
		}
		printf("\n matriz :\n");
		
		for(i=0;i<tam;i++){
			for(j=0;j<tam;j++){
				printf("\t %d",m[i][j]);
			}
		printf("\n");
		}
		
		soma=0;
		for(i=0;i<tam;i++){
			soma+=m[i][i];
		}
		
	printf("\n soma do diagonal %d",soma);
	
	return 0;
}