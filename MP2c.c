// GROUP #4
// Members: HERCE, DOMINIC MARCUS REYES & TAN, PETER BENJAMIN ALELIGAY

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>


extern void imgCvtGrayDoubleToInt(int n, double* doubleVec, uint8_t* intVec);	

int main(){
	int row, col;
	printf("Input 2 ints (row, col): ");
	scanf("%d %d", &row, &col);
	printf("\n");
	printf("%d %d\n", row, col);
	printf("Input matrix values (per row): \n");
	int n = row*col;
	double* doubleVec= (double*)malloc(n*sizeof(double)); // allocate memory based on the size of n (rows x columns)
	uint8_t* intVec = (uint8_t*)malloc(n*sizeof(uint8_t));
	
	// read inputs and display pre-processed data
	int i = 0;
	for (i; i < row; i++){
		int j = 0;
		for (j; j < col; j++) {
			scanf("%lf", &doubleVec[i*col+j]);
			printf("%.2lf ", doubleVec[i*col+j]);
		}
		printf("\n");
	}
	printf("\n");
	
	// testing average runtime of the imgCvtGrayDoubleToInt function
	double sumTime = 0; // sum for getting average runtime
	int tests = 30;		// initialize number of tests 
	for(i=0; i < tests; i++){
		clock_t begin = clock();	
		imgCvtGrayDoubleToInt(n, doubleVec, intVec);
		clock_t end = clock();
		double execTime = ((double)(end-begin) / CLOCKS_PER_SEC) * 1000000000; // calculate runtime in milliseconds
		sumTime = sumTime + execTime;
	}
	
	// print output of processed data
	printf("output matrix:\n");
	int x = 0;
	for (x; x < row; x++){
		int y = 0;
		
		for (y; y < col; y++) {
			printf("%d ", intVec[x*col+y]);
		}
		printf("\n");
	}
	
	// average runtime = sum of runtimes / number of tests
	printf("\nAverage Processing time (in milliseconds): %lf\n", sumTime/tests); 
	
   return 0;
}
