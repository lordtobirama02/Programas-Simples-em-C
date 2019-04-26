#include <stdio.h>
#include <stdlib.h>

int soma_matriz(int **a,int l,int c);

int main(){
	
	
	printf("Informe a quantidade de linhas:");
	int l;
	scanf("%d",&l);
	
	int **v = (int **)calloc(l,sizeof(int *));
	int i,j;
	
	printf("Informe a quantidade de colunas:");
	int c;
	scanf("%d",&c);
	
	for(i = 0; i < l; i++){
		v[i] = (int *)calloc(c,sizeof(int));
	}
	
	puts("\nInforme os elementos:");
	
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			scanf("%d",&v[i][j]);
		}
	}
	int r = soma_matriz(v,l,c);
	
	printf("\nResultado: %d\n",r);
	
	for(i = 0; i < l; i++){
		free(v[i]);
	}
	free(v);

return 0;
}

int soma_matriz(int **a,int l,int c){
	int i,j,soma = 0;
	
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			soma = soma + a[i][j];
		}
	}
	
	return soma;
}
