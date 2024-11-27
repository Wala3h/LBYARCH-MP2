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
input size on the first line to fit the input being accepted by the program, which is then looped 30 times where the execution times are added, and is then averaged at the end. 

### Input size: 10x10 
Using the 10x10 input size, after looping 30 times and getting the average time in milliseconds, it resulted to 0.000000. 
![image](https://github.com/user-attachments/assets/856c2559-275b-4ef1-8fab-4d6fcc4ebc60)



### Input size: 100x100 
Similarly, the execution time of the function for an input size of 100x100 resulted to a very low time, to which the double data type of the calculated execTime resulted to 0.00000.

![image](https://github.com/user-attachments/assets/eca28e96-eb46-47e9-beb5-1d6f2e87dd67)



### Input size: 1000x1000
Finally, the largest input size to be tested is 1000x1000. Among 30 repeated runs, the calculated average execution time of the function resulted to 1.166667

![image](https://github.com/user-attachments/assets/87912216-afec-4481-a4d6-35d00e261cb3)

Based on the results above, the function works quite fast for small input sizes. On larger inputs, the execution time becomes higher as there are more iterations executed by the function.


## Output Screenshot

![image](https://github.com/user-attachments/assets/43382a46-574b-4575-ae38-9246d7f6ce3f) ![image](https://github.com/user-attachments/assets/8be13e7d-3661-4039-9b03-8b303c2ae492)


Above is the screenshot of the output as compared to the sample output in the provided specifications. However, there are some data points where the sample output does not match the program output. This is caused by the CVTSS2SI function, which rounds
the number to the nearest whole number. This results in some cases being rounded up, while some are rounded down. 



