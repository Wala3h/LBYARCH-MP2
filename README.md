# LBYARCH-MP2

## imgCvtGrayDoubleToInt Function performance

In checking the performance of the function, we made use of the Clock function from the time.h library of C.
The function call is wrapped between two declarations making use of the clock_t data type, begin and end (excludes the print loop time). 
```
	clock_t begin = clock();
	imgCvtGrayDoubleToInt(n, floatVec, intVec);
	clock_t end = clock();
```

Below is the code snippet for calculating and printing the execution time in Seconds:
```
	double execTime = (double)(end-begin) / CLOCKS_PER_SEC;
	printf("\nProcessing time (in seconds): %f", execTime);
```
## Execution time and average of different input sizes
In order to create the matrices for different input sizes, we made use of the RANDARRAY() function in Google Sheets, specifying the range to be 0-1. 
This process was repeated from the 10x10 matrix, 100x100 matrix, and the 1000x1000 matrix. Then, the results were downloaded as a .tsv (tab separated value) file where we added the
input size on the first line to fit the input being accepted by the program. 

### Input size: 10x10 
Using the 10x10 input size, the execution time of the function was 0.00000 for each run. The code
![image](https://github.com/user-attachments/assets/af911c6c-889c-45a7-b6cf-951aff9da1e4)


### Input size: 100x100 
Similarly, the execution time of the function for an input size of 100x100 resulted to a very low time, to which the double data type of the calculated execTime resulted to 0.00000

![image](https://github.com/user-attachments/assets/440cd573-75b0-49b0-9587-4c53ae8e33a8)


### Input size: 1000x1000
Finally, the largest input size to be tested is 1000x1000. Among 30 repeated runs, the calculated average execution time of the function resulted to 0.00143

![image](https://github.com/user-attachments/assets/3185369b-8945-4793-856b-3e33d812f824)

Based on the results above, the function works quite fast for small input sizes. On larger inputs, the execution time becomes higher as there are more iterations executed by the function.


## Output Screenshot

![image](https://github.com/user-attachments/assets/a61538a2-2188-4957-b661-8b31c3169f8e) ![image](https://github.com/user-attachments/assets/8be13e7d-3661-4039-9b03-8b303c2ae492)


Above is the screenshot of the output as compared to the sample output in the provided specifications. However, there are some data points where the sample output does not match the program output. This is caused by the CVTSS2SI function, which rounds
the number to the nearest whole number. This results in some cases being rounded up, while some are rounded down. 



