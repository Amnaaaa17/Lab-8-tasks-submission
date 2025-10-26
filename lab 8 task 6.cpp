#include<stdio.h>
int main(){
	int A[3][3];
	int i, j, k;
	int min_row, col_index;
	int saddle_found=0;
	
	printf("enter elements od 3x3 matrix: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &A[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		min_row = A[i][0];
		col_index = 0;
		for(j=0; j<3; j++){
			if(A[i][j] < min_row){
				min_row = A[i][j];
				col_index = j;
			}
		}
		int is_saddle = 1;
		for (k=0; k<3; k++){
			if(A[k][col_index] > min_row ){
			
			is_saddle = 0;
			break;
			}
		}
		if (is_saddle){
			printf("saddle point is found at %d, %d : %d",i, col_index, min_row);
			saddle_found = 1;
		} 
		
	}
	if(!saddle_found){
		  printf("No saddle point found\n");
		}
	
	
	
	return 0;
}
