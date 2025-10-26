#include<stdio.h>
int main(){
	int A[2][2], B[2][2], C[2][2];
	int i, j;
	
	printf("enter elements of first 2x2 matrix:");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			scanf("%d", &A[i][j]);
		}
	}
	
	printf("\nenter elements of second 2x2 matrix:");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			scanf("%d", &B[i][j]);
		}
	}
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	printf("\nsum of matrices A+B is: \n");
	for(i = 0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d", C[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
	
}
