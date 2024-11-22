#include <stdio.h>
// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value
//


int isMagicSquare(int ** square, const int n) {

    // Eliminate the case where 'n' is negative
    if(n < 0) {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals
    int M = (n * (n*n + 1))/2;

    int i, j;

    // TODO: Checking that every row and column add up to M
    // implement a for loop over i,j to check if sum != M for each row and column
    int row_sum, col_sum;
    
    for (i=0;i<n;i++){

	    //declare sum = 0
	    
	    row_sum = 0;
	    col_sum = 0;

	    //update sums for each row and col element

	    for (j=0;j<n;j++){
		    row_sum = row_sum + square[i][j];
		    col_sum = col_sum + square[j][i];
	    }
	    if (row_sum != M||col_sum != M) {
		    return 0;
	    }
    }


    // TODO: Checking that the main and secondary
    int diag_sum, sec_diag_sum;

    diag_sum = 0;
    sec_diag_sum = 0;

    for (i=0;i<n;i++) {
	    diag_sum = diag_sum + square[i][i];
	    sec_diag_sum = sec_diag_sum + square[i][n-i-1];
    }

    // diagonals each add up to M
    
    if (diag_sum != M||sec_diag_sum != M) {
	    return 0;
    }
    

    // If passed all checks, it is a magic square


    return 1;
}

