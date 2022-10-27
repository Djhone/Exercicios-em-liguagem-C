#include<stdio.h>
#define linha 2
#define coluna 2

	int main(){
		int m[linha][coluna],i,j,K,v[linha][coluna],k;
		printf("digite valor para multiplicar a matriz:");
		scanf("%d",&k);

			for(i=0;i<linha;i++){
				for(j=0;j<coluna;j++){
				
					printf("matriz [%d] [%d] :",i,j );
						scanf("%d",&m[i][j]);
					
			}
	} 
			printf("\n matriz :\n");
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
			printf("\t %d",m[i][j]);
		}
		printf("\n");

}
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
			v[i][j]=m[i][j]*k;
		}
			}
		printf(" matriz V :\n");
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
			
			printf("\t %d",v[i][j]);
		}
		printf("\n");

}
	return 0;
	
	}