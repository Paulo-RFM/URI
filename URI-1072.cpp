#include<stdio.h>

int main(){
	int n, in=0, out=0;

	//scanf("%d", &n);

	for(int i = 0 ; i < n ; i++){
		//scanf("%d", &n);
		if(n >= 10 && n <= 20){
			in++;
		}else{
			out++;
		}
	}
	printf("%d %s\n", in, "in");
	printf("%d %s\n", out, "out");


return 0;
}