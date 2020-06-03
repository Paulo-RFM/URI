#include<stdio.h>

int main(){
    float vetor[6];
    int contador=0;


    for(int i = 0, float media = 0 ; i < 6 ; i++){

        scanf("%f", &vetor[i]);
            if(vetor[i] > 0.0){
                contador++;
            }
    }
 
    printf("%d valores positivos\n", contador);
return 0;
}