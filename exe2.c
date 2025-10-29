#include <stdio.h>

int soma(int v[], int tam){
    if(tam == 0){
        return 0;
    }else{
        return v[tam- 1] + soma(v, tam - 1);
    }
    
}
int main(){
    int tamanho;
    printf("Digite o tamanhno do vetor: ");
    scanf("%d", &tamanho);
    
    int vetor[tamanho];
    for(int i =0; i < tamanho; i++){
        printf("Digite o elemto %d do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    int resultado = soma(vetor, tamanho);
    
    printf("%d",resultado);
    
    return 0;
}
