#include <stdio.h>
#include <string.h>

char *palindromo(char *str);

int main(){
	char s[20];
	
	printf("Informe uma string:");
	scanf("%20[^\n]s",s);
	
	char *r = palindromo(s);
	
	printf("Resultado: %s\n",r);
}

char *palindromo(char *str){
	int i,j = 0;
	
	char s[strlen(str)];
	s[strlen(str)] = '\0';
	
	for(i = strlen(str)-1; i >= 0; i--){
			s[j] = str[i];
			j++;
	}
	
	if(strcmp(s,str) == 0){
		return "Palindromo!";
	}else
		return "Não é!";
}
