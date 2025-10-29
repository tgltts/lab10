#include <stdio.h>

int potencia(int x , int n){
    if(n == 0){
        return 1;
    }else{
        return x * potencia(x ,n - 1);
    }
    
}
int main(){
    int base;
    int expoente;
    
    printf("Digite a bese: ");
    scanf("%d", &base);
    
    printf("Digite o expoente: ");
    scanf("%d",&expoente);
    
    int resultado = potencia(base, expoente);
    printf("%d", resultado);
    
    return 0;
} 
