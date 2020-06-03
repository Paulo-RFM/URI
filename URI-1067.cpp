#include<stdio.h>

int main(){
    int x, aux=0;
    do{
        scanf("%d", &x);

        if(x >= 1 && x <= 1000){
            for(int i = 1 ; i <= x ; i++){
                if(i % 2 == 1){
                printf("%d\n", i);
                }
            }
            aux=1;
        }
    }while (aux == 0);
}