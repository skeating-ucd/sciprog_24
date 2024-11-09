#include <stdio.h>
#include <math.h>

int gcd (int a, int b);
int gcdrecursive(int a, int b);

int main(void)
{
	int x, y;

	//Request user input for two integers: x and y
	printf("Please provide two integer values:\n");
	scanf("%d %d", &x, &y);

	//Call our function and print the result
	printf("\nThe greatest common divisor (iterative) for (%d,%d) is: %d\n", x, y, gcd(x,y));
	printf("\nThe greatest common divisor (recrusive) for (%d,%d) is: %d\n", x, y, gcdrecursive(x,y));
	
	return 0;
}


//define our function gcd(a,b)
int gcd(int a, int b)
{
	int temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}

	return a;
}

//define the recursive function gcdrecursive
int gcdrecursive(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcdrecursive(b,a % b);

	}
}
