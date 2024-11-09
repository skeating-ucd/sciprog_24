#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int factorial(int x);

int main(void) {


	int i, order;
	double e, *terms;

	// request user input for the order of the series
	printf("Please enter the order value\n");
	scanf("%d", &order);

	// Allocate memory for our dynamic array using malloc
	terms = (double *)malloc(order*sizeof(double));

	for (i=0;i<order;i++)
       	{
		terms[i] = 1.0/(double)factorial(i+1);
		
	}

	e = 1.0;
	
	for (i=0;i<order;i++) 
	{
		e = e + terms[i];
	}



	//free the memory from our malloc call for terms
	free(terms);

	printf("\n e is estimated to be %.10lf, with difference %e\n",e,e-exp(1.0));


	return 0;
}


//declare our factorial function
int factorial(int x) {
	if (x<0) {
		printf("You must enter a positive number\n");
		return(-1);
	}
	else if (x==0) {
		return 1;
	}
	else {
		return (x * factorial(x-1));
	}

}
