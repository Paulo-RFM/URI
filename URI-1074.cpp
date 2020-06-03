#include<stdio.h>
#include<string.h>

void classificaNum(long long int n){
    long long int x;
    char impar[4] = "ODD";
    char par[5] = "EVEN";
    char pos[10] = "POSITIVE";
    char neg[10] = "NEGATIVE";

    for(int i = 0; i < n ; i++){
                scanf("%lld", &x);

                if(x == 0){
                    printf("NULL\n");
                    continue;
                }
                
                if(x > 0){
                    if(x % 2 == 0){
                    printf("%s %s\n", par, pos);
                }else{
                    printf("%s %s\n", impar, pos);
                }
                
                }else{
                    if(x % 2 == 0){
                        printf("%s %s\n", par, neg);
                    }else{
                        printf("%s %s\n", impar, neg);
                }
            }
    }
}



int main(){
    int aux=0;
    long long int n;

    do{
        scanf("%lld", &n);

        if(n < 10000 && n > 0){
            classificaNum(n);
            aux=1;
        }

    }while(aux == 0);
    
return 0;
}