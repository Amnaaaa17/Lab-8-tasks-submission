#include<stdio.h>
int main(){
	int n;
	
	printf("enter the end number: \n");
	scanf("%d", &n);
	
	for (int i = 1; i<=n; i++){
		if( i>1){
			int is_prime = 1;
			for(int j=2; j<i; j++){
				if(i%j == 0){
					is_prime = 0;
					break;
				}
			}
			if (is_prime ){
				printf("%d\n", i);
			}
		}
	}
	return 0;
	
}
