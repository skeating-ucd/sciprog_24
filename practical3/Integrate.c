#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {


/* Declare Variables */
	int i,N;
	float a, b, Sum, Step, Diff;

/* Declare values for a,b,N */
	a = 0.0;
	b = M_PI/3.0;
	N = 12;
	
/* Create our step value */
	Step = (b-a)/12.0;

/* Initialise our sum */
	Sum = tan(a) + tan(b);

/* Add 2tan(x) for each step to our sum */
	for(i=0; i<12; i++) {
		Sum = Sum + 2*tan(a + (Step * (float)i));
	}

/* Multiply our sum by a factor of  (b-a)/2N */
	Sum = Sum*((b-a)/(2*N));

/* Calculate the Log(2) and compare with our sum */
	Diff = Sum - logf(2);

/* Print Our Results */
	printf("The integral from 0 to Pi/3 is %.3f\n", Sum);
	printf("The difference between our calculation and Log(2) is %.3f\n", Diff);

return 0;
}

