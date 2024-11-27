// GROUP #4
// Members: HERCE, DOMINIC MARCUS REYES & TAN, PETER BENJAMIN ALELIGAY

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


extern void imgCvtGrayDoubleToInt(int n, float* floatVec, int* intVec);	

int main(){
	int row, col;
	printf("Input 2 ints (row, col): ");
	scanf("%d %d", &row, &col);
	printf("\n");
   printf("%d %d\n", row, col);
	printf("Input matrix values (per row): \n");
	int n = row*col;
	float* floatVec= (float*)malloc(n*sizeof(float));
	int* intVec = (int*)malloc(n*sizeof(int));
	// start time counting (processing focused, eliminates input delay)
	int i = 0;
	for (i; i < row; i++){
		int j = 0;
		for (j; j < col; j++) {
			scanf("%f", &floatVec[i*col+j]);
			printf("%.2f ", floatVec[i*col+j]);
		}
		printf("\n");
	}
	printf("\n");
	
	clock_t begin = clock();
	imgCvtGrayDoubleToInt(n, floatVec, intVec);
	clock_t end = clock();
	// print output
	int x = 0;
	for (x; x < row; x++){
		int y = 0;
		
		for (y; y < col; y++) {
			printf("%d ", intVec[x*col+y]);
		}
		printf("\n");
	}
	// clock_t end = clock();
	
	double execTime = (double)(end-begin) / CLOCKS_PER_SEC;
	printf("\nProcessing time (in seconds): %f", execTime);
   return 0;
}
