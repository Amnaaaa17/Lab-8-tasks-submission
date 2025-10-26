#include<stdio.h>
int main(){
	int A[2][2][2];
	int i, j, k;
	
	printf("Enter elements of 3d array: \n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			for(k=0; k<2; k++){
				scanf("%d", &A[i][j][k]);
			}
		}
	}
	
	printf("the 3d array is: \n");
		for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			for(k=0; k<2; k++){
				printf("%d", A[i][j][k] );
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}
