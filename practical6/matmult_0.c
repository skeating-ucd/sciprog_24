// Create a progmram to multiply two matrices C = AxB
// C = nxq
// A = nxp
// B = pxq

#include <stdio.h>
#include <math.h>
#include <string.h>

// Construct Main
int main(void) {

	//Declare variables
	int n, p, q, i, j;

	// Define n=5, p=3, q=4
	n = 5;
	p = 3;
	q = 4;

	//Declare our matrices
	double A[n][p], B[p][q], C[n][q];

	//Initialise C to be zeros matrix, use memset
	memset(C, 0, sizeof(double) * n * q);

	//Populate A and B
	//A(i,j) = i+j
	//B(i,j) = i-J
	//Use for loops to iterate over each cell
	for (i=0;i<n; i++) {
		for (j=0;j<p;j++) {
			A[i][j] = (double) (i +j);
		}
	}

	for (i=0;i<p; i++) {
		for (j=0;j<q;j++) {
			B[i][j] = (double) (i - j);
		}
	}


	// Next populate C elements
	// C(i,j) = sum( A[i][k] * B[k][j] ), sum over k index
	// Store values in our C matrix
	
	// Use for loop to iterate over each (i,j) element in C
	// Use a second for loop to itereate over the multiplaction/sum
	
	// require some additional variables
	int k;
	double Mul,Sum;
	
	for (i=0;i<n;i++) {
		for (j=0;j<q;j++) {

			//Reset our sum/mul vars for each iteration of i,j
			Sum = 0.0;
			Mul = 0.0;

			//Implement our multiplication formula for each cell
			for (k=0;k<p;k++) {
				Mul = A[i][k] * B[k][j];
				Sum = Sum + Mul;
			}
			//Set C(i,j) = our sum of A*B components
			C[i][j] = Sum;
		}
	}

	//Print the three arrays with one row per line
	//Print A
	printf("A: =\n");
	for (i=0;i<n;i++) {
		for (j=0;j<p;j++) {
			if (j == p-1) {
				printf("%.1lf\n",A[i][j]);
			}
			else {
				printf("%.1lf, ",A[i][j]);
			}
		}
	}
	
	// print B
	printf("B: =\n");
        for (i=0;i<p;i++) {
                for (j=0;j<q;j++) {
                        if (j == q-1) {
                                printf("%.1lf\n",B[i][j]);
                        }
                        else {
                                printf("%.1lf, ",B[i][j]);
                        }
		}
	}

	// print C
	printf("C: =\n");
        for (i=0;i<n;i++) {
                for (j=0;j<q;j++) {
                        if (j == q-1) {
                                printf("%.1lf\n",C[i][j]);
                        }
                        else {
                                printf("%.1lf, ",C[i][j]);
                        }
		}
	}

	return 0;
}



