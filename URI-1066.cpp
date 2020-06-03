#include<stdio.h>

bool verificaParImpar(int n){
	if(n%2==0){
		return true;
	}else{
		return false;
	}
}

bool verificaPositivo(int n){
	if(n > 0){
		return true;
	}else if(n < 0){
		return false;
	}else{
		return NULL;
	}
}


int main(){
	int aux;
	int par=0, impar=0, positivo=0, negativo=0;

	for(int i = 0 ; i < 5 ; i++){
		scanf("%d", &aux);
		if(verificaParImpar(aux)){
			par++;
		}else{
			impar++;
		}
        
        
		if(aux != 0){
			if(verificaPositivo(aux)){
				positivo++;
			}else{
				negativo++;
			}
		}
	}
	
	printf("%d %s\n",par, "valor(es) par(es)");
	printf("%d %s\n",impar, "valor(es) impar(es)");
	printf("%d %s\n",positivo, "valor(es) positivo(s)");
	printf("%d %s\n",negativo, "valor(es) negativo(s)");

return 0;
}
