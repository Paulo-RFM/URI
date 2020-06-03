#include<stdio.h>

int main(){
    int vetor[5];
    int contador=0;


    for(int i = 0; i < 5 ; i++){
        scanf("%d", &vetor[i]);
            if(vetor[i] % 2 == 0){
                contador++;
            }
    }

    printf("%d valores pares\n", contador);
return 0;
}