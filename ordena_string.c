#include <stdio.h>
#include <string.h>

void ordena(char *str);
void padroniza(char *str);

int main(){
	
	char nome[20];
	
	printf("Informe uma string:");
	fgets(nome,sizeof(nome),stdin);
	
	ordena(nome);
	
	printf("%s\n",nome);
}

void ordena(char *str){
	int i,j;
	
	padroniza(str);
	
	for(i = 0; i < strlen(str)-1; i++){
		for(j = 0; j < strlen(str)-1-i; j++){
			if(str[j] > str[j+1]){
			
				char temp = str[j];
				str[j] = str[j+1];
				str[j+1] = temp;
			}
		}
	}
	
}

void padroniza(char *str){
	int i;
	
	for(i = 0; i < strlen(str); i++){
		if(str[i] >= 97 && str[i] <= 122){
			str[i] = (char)(str[i]-32);
		}
	}
}