#include <stdio.h>
#include <stdlib.h>

extern int CvtToInt(float floatVal);	

int main(){
	int row, col;
   printf("Input 2 ints (row, col): ");
   scanf("%d %d", &row, &col);
   
   printf("Input matrix values (per row): \n");
   float floatVec[row][col];
   int intVec[row][col];
	   
   int i = 0;
   for (i; i < row; i++){
   	int j = 0;
   	for (j; j < col; j++) {
   		scanf("%f", &floatVec[i][j]);
   		intVec[i][j] = CvtToInt(floatVec[i][j]);
		}
		printf("\n");
	}
	
	// print output
	int x = 0;
	 for (x; x < row; x++){
   	int y = 0;
   	for (y; y < col; y++) {
   		printf("%d ", intVec[x][y]);
		}
		printf("\n");
	}
   return 0;
}

