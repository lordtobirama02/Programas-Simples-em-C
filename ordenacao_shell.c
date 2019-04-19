#include <stdio.h>

void Ordenacao_Shell(int *v,int n);

int main(){

    
    int i;
    printf("Informe o tamanho do vetor:");
    int n;
    scanf("%d",&n);
    
    int x[n];
    
    for(i = 0; i < n; i++){
    	printf("%dº elemento:",i+1);
    	scanf("%d",&x[i]);
    }

    Ordenacao_Shell(x,n);

    printf("\nVetor Ordenado:\n");
    
    for(i = 0; i < n; i++){
        printf("%d\t",x[i]);
    }
    printf("\n");
}

void Ordenacao_Shell(int *v, int n){
    
    int i,j,k;
    
    for(i = n/2; i > 0; i = i/2){
        for(j = i; j < n; j++){
            for(k = j - i; k >= 0; k = k - i){
            
                if(v[k+i] >= v[k])
                break;
                else{
                
                    int temp = v[k];
                    v[k] = v[k+i];
                    v[k+i] = temp;
                }
            }
        }
    }
}
