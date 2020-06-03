#include <stdio.h>

int main(){
    int x, y, j=1, i;
    scanf("%d %d", &x, &y);

    if(x > 1 && x < 20 && y > x && y < 100000){
        while(j <= y){
            for ( i=0 ; i < x; i++) {
                if(i == x-1){
                    printf("%d", j);
                    j++;
                    continue;
                }else{
                    printf("%d ", j);
                    j++;
                }
            }
            printf("\n");
        }
    }

return 0;
}
