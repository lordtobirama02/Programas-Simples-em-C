#include <stdio.h>

int main(){

	FILE *fp = fopen("produto de n numeros.txt","wb");
	
	if(fp == NULL){
		printf("Problemas ao abrir o arquivo!\n");
		return 1;
	}
	
	printf("Informe a quantidade de numeros a ser multiplicado:");
	int qtd;
	scanf("%d",&qtd);

	float v[qtd+1];
	
	for(int i = 0; i < qtd; i++){
	
		printf("%dº elemento:",i+1);
		scanf("%f",&v[i]);
	}
	
	float m = 1;
	for(int i = 0; i < qtd; i++){
		m = (float)m * v[i];
	}
	v[qtd] = m;
	
	int s = fwrite(v,sizeof(float),qtd+1,fp);
	
	if(s == qtd+1){
		
		printf("Resultado: %0.2f\n",m);
	}

return 0;
}
