#include <stdio.h>

int main(){
	int x, y, cont=0;

	scanf("%d %d",&x, &y);

	if(x > y){
		for(x-- ; x > y ; x--){
			if(x%2 == 1 || x%2 == -1 ){
				cont = cont + x;
			}
		}
	}else{
		for(x++ ; x < y ; x++){
			if(x%2==1 || x%2 == -1){
				cont = cont + x;
			}	
		}
	}

	printf("%d\n", cont);
	return 0;
}