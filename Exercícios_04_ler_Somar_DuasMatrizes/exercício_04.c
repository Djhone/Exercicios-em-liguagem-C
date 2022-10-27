#include<stdio.h>
#define tam 2

	int main(){
		int m[tam][tam],v[tam][tam],k[tam][tam],i,j,c,d;
		
		for(i=0;i<tam;i++){
			for(j=0;j<tam;j++){
				printf("matriz M [%d][%d]",i,j);
				scanf("%d",&m[i][j]);
			}
		}


	for(i=0;i<tam;i++){
			for(j=0;j<tam;j++){
			printf("matriz V[%d][%d]",i,j);
				scanf("%d",&v[i][j]);
			}
		}

	
		printf("\n matriz M \n");
		for(i=0;i<tam;i++){
			for(j=0;j<tam;j++){
				printf("\t %d",m[i][j])	;
		}
			printf("\n");
	}


	printf("\n matriz V \n");
		for(i=0;i<tam;i++){
			for(j=0;j<tam;j++){
				printf("\t %d",v[i][j])	;
		}
			printf("\n");
	}
		
		
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			k[i][j]=m[i][j]+v[i][j];
		}
	}
	printf("\n matriz k \n");
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
		
			printf("\t %d",k[i][j])	;
		}
		printf("\n");
	}	
	return 0;
	}
	