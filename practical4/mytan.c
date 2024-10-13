#include <stdio.h>
#include <math.h>


/* **Use the function from thrid lecture to convert degress to radians** */


/* Declare our array to store values of tan from 0 to 60 degrees */

float Tan_Array[13];
float T_Int, pi;
float degtorad(float arg);
float integrate(float arr[13]);


/* Construct Main */

int main(void) {

	/* declare variables */
	float degang, radang; int i;
	pi = atanf(1.0)*4.0;

	/* Next populate our array using a loop */
	
	for(i=0; i<13; i++) {
		degang = (float)i*5.0;
		radang = degtorad(degang);
		Tan_Array[i] = tan(radang);

	/*printf("%.3f, %.3f\n", degang,radang);*/
	
	}

	/* print the array for tan(x) */

	printf("Tan(x) for [0,60] degrees in steps of 5 degrees : \n");
	for(i=0; i<13; i++) {
		printf("%.4f\n",Tan_Array[i]);
	}

	/* print the integral of tan(x) */
	T_Int = integrate(Tan_Array);
	printf("The integral of Tan(x) for [0,60] is : %.4f\n",T_Int);
	
	return 0;
}

/* define  degtorad (from slide 3 week 4)*/
float degtorad(float arg) {
	return( (pi*arg)/180.0);

}

/* define int_tan (trapezoid rule from practical 3) */
float integrate(float arr[13]) {

	float sum, step;
	int i;
	sum = 0.0;
	step = degtorad(5.0);

	for (i=0; i<13; i++) {
		if (i==0||i==12) {
			sum = sum + arr[i];
		}
		else {
			sum = sum + 2.0*arr[i];
		}	
	}
	return( (sum * (step/2.0)));
}
