#include<stdio.h>
int main(){
	int n;
	printf("enter how many lines of triangle u want: ");
	scanf("%d", &n);
	
	for(int i = 1; i<=n; i++){
		for(int j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
