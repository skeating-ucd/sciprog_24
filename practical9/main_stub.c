#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square_stub.h"

int getlines(char filename[MAX_FILE_NAME]);

int main(){  

    //define our file variable
    FILE *f;  
    char filename[MAX_FILE_NAME];
    printf("Enter file name: ");
    scanf("%s", filename);
    
    // ##! n function which gets the number of lines
    int n = getlines(filename);

    // TODO: Open the file

    f = fopen(filename, "r");

    if (f == NULL)
    {
	    printf("Error reading file.\n");
	    exit(1);
    }

    int i;

    // TODO: Allocating a matrix for storing the magic square
    // as an array of pointers, where each pointer is a row 

    int **A;

    // A = matrix, array of pointers, each row = pointer (row of pointers)
    // size A = (n * (int *))
    
    A = (int **)malloc(n * sizeof(int *));

    //alloate memory for each row
    //size A[i] = n * int
    
    for (i=0;i<n;i++) 
    {
	    A[i] = (int *)malloc(n * sizeof(int));
    }


    // TODO:inputting integer data into the matrix;
    int j;
    
    for (i=0;i<n;i++)
    {
    	for (j=0;j<n;j++)
    	{
		fscanf(f, "%d", &A[i][j]);

		//test mat by printing
		//printf("%d", A[i][j]);
	}
	//printf("\n");
    }

    //Check if matrix is magic:

    int magic = isMagicSquare(A,n);

    if (magic == 0)
    {
	    printf("This matrix is not magic\n");
    }
    else
    {
	    printf("This matrix is magic!\n");
    }


    // TODO: Freeing each row separately before freeing the array of pointers
    
    for (i=0;i<n;i++){
	    free(A[i]);
    }
    
    free(A);


    // TODO:Close the file
    

    fclose(f);


    return 0;
}  

//##!

int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");
    
    int ch_read;
    int count = 0;

    while( (ch_read = fgetc(fp)) != EOF)
    {
        if (ch_read == '\n'){
            count++;
        }
    }

    printf("No. lines, %d\n", count);
    fclose(fp); 
    return count;
}
