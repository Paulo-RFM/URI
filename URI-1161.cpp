#include <stdio.h>

int main() {
    int n ,m;
    long long int fat1, fat2;


   while ( scanf("%d%d", &m,&n) != EOF){
       for(fat1 = 1; n > 1; n = n - 1){
           fat1 = fat1 * n;
       }

       for(fat2 = 1; m > 1; m = m - 1){
           fat2 = fat2 * m;
       }

       printf("%lld\n", (fat2 + fat1));
   }
   
    return 0;
}