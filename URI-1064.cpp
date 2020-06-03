#include<stdio.h>

int main(){
    float vetor[6], media=0;
    int contador=0;


    for(int i = 0; i < 6 ; i++){

        scanf("%f", &vetor[i]);
            if(vetor[i] > 0.0){
                media = media + vetor[i];
                contador++;
            }
    }

    media = media/contador;
 
    printf("%d valores positivos\n%.1f\n", contador, media);
return 0;
}