#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define linha 4
#define coluna 5
	
	int main(){
		srand(time(NULL));
		int m[linha][coluna],i,j,maior,linha_maior,coluna_maior;
		
		
		for(i=0;i<linha;i++){
			for(j=0;j<coluna;j++){
			
			m[i][j]=rand()%50;	
			}
	}
		
	//mostrar a matriz e achar a maior
	maior=m[0][0];
	printf("\n matriz aleaoria:\n");
		for(i=0;i<linha;i++){
				for(j=0;j<coluna;j++){
					printf("\t %d",m[i][j]);
					if(m[i][j]>maior){
						maior=m[i][j];
						linha_maior=i;
						coluna_maior=j;	
					}
				}
		printf("\n");
		}
	printf("\n O maior elemento encontrado foi o %d, na linha %d  e coluna %d",maior,linha_maior,coluna_maior);
 ;
}