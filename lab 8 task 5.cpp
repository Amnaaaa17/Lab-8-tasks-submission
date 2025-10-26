#include<stdio.h>
int main(){
	int A[3][3], T[3][3];
	int i, j;
	
	printf("enter elements of 3x3 matrix: \n");
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &A[i][j]);
		}
	}
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){
			T[j][i] = A[i][j];
		}
	}
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d", T[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
