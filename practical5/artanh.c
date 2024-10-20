// Have the user input a real positive number 'delta'
// Implement a function artanh1(x) to approximate the maclaurin series of hyperbolic arctangent
// Have the function stop when the element in the series is smaller than delta
//
// Implement a function artanh2(x) using approximations to natural log. (Use math library)
//
// Write a main that will calculate arctanh(x), [-0.9,0.9], sampled every 0.01 using both methods in seperate arrays.
// Store the results and compare piecewise to ten significant figures.


#include <stdio.h>
#include <math.h>

//Declare  functions

double artanh1(float x, int delta);
double artanh2(float x);


//Construct Main
int main(void) {

	//declare variable
	int delta;

	//Have user input a value for delta
	printf("Please enter a positive real number(int):\n");
	scanf("%d",&delta);


	//calculate arctanh(x), [-0.9,0.9] in steps of 0.01
	//Store results in seperate arrays for artanh1 and artanh2
	
	// declare our step and establish the step count
	float step;
	int stepcount, i;
	step = 0.01;
	stepcount = 1.0 + (int)rint(2.0*(0.9/step)); //endpoints inclusive

	//declare our arrays
	double art1[stepcount], art2[stepcount], difference[stepcount];

	//Create a loop to call our functions and store values
	for (i=0;i<stepcount;i++) {
		float xinput;
		xinput = -0.9 + (float)(i)*step;
		art1[i] = artanh1(xinput,delta);
		art2[i] = artanh2(xinput);
		difference[i] = art1[i] - art2[i];
		
		printf("X = %.2f || Artanh1: %lf || Artanh2: %lf || Difference: %.10lf\n", xinput, art1[i], art2[i], difference[i]);
	}
	return 0;
}
	//Test Case 0.5
	//double  answer1, answer2;	
	//answer1 = artanh1(0.5, delta);
	//answer2 = artanh2(0.5);
	//printf("%lf  %lf\n",answer1,answer2);

double artanh1(float x, int delta) {
	//declare variable
	int i;
	double element, value_out, dubx, j;

	//convert x to a double for use in pow
	dubx = (double)x;
	//Produce our sum using a for loop
	for (i=0; i<delta; i++) {
		//i=1 => x
		if (i==1) {
			value_out = (double)x;
			}
		else {
			//calculate the nth term and add it to our sum
			j = (double)((2*i)+1);
			element = pow(dubx,(double)j)/(double)j;
			value_out = value_out + element;
		}
	}
	return value_out;
}

double artanh2(float x) {
		//declare variables
		double a, b, value_out;
		// a = x+1 and convert to double
		a = (double)(1.0+x);
		// b = x-1 and convert to double
		b = (double)(1.0-x);
		//calculate our log expression
		value_out = 0.5*(log(a)-log(b));

		return value_out;
}
