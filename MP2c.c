// GROUP #4
// Members: HERCE, DOMINIC MARCUS REYES & TAN, PETER BENJAMIN ALELIGAY

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


extern int  imgCvtGrayDoubleToInt(float floatVal);	

int main(){
	int row, col;
	printf("Input 2 ints (row, col): ");
	scanf("%d %d", &row, &col);
	printf("\n");
   printf("%d %d\n", row, col);
	printf("Input matrix values (per row): \n");
	float floatVec[row][col];
	int intVec[row][col];
	int i = 0;
	
	// start time counting (processing focused, eliminates input delay)
	clock_t begin = clock();
	
	for (i; i < row; i++){
		int j = 0;
		
		for (j; j < col; j++) {
			scanf("%f", &floatVec[i][j]);
			printf("%.2f ", floatVec[i][j]);
			intVec[i][j] =  imgCvtGrayDoubleToInt(floatVec[i][j]);
		}
		 printf("\n");
	}
	printf("\n");
	// print output
	int x = 0;
	for (x; x < row; x++){
		int y = 0;
		
		for (y; y < col; y++) {
			printf("%d ", intVec[x][y]);
		}
		printf("\n");
	}
	
	clock_t end = clock();
	double execTime = (double)(end-begin) / CLOCKS_PER_SEC;
	printf("\nProcessing time (in seconds): %f", execTime);
   return 0;
}
