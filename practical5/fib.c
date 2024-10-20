// Create a program that displays the fibonacci sequence up to the nth term
// Have the user input the value for n
// Use a loop to find the whole series
// Print the series


#include <stdio.h>
#include <math.h>

int main(void) {

	//Declare Variables
	int n, i;

	// Enter information from user
	printf("Enter a positive integer:\n");

	scanf("%d",&n);
	
	//create an array to store our n fibonacci numbers
	int fib[n];

	printf("The first %d fibonacci numbers are:\n", n);

	//Populate the array and print the array
	for (i=0;i<n;i++) {
		if (i==0) {
			fib[i]=0;
			printf("%d ",fib[i]);
		}
		else if (i==1) {
			fib[i]=1;
			printf("%d ",fib[i]);
		}
		else {
			fib[i] = fib[i-2] + fib[i-1];
			printf("%d ",fib[i]);
		}
	}

	//Instead of another if statement for the final entry, just end our printed string with \n
	printf("\n");

	return 0;
}

