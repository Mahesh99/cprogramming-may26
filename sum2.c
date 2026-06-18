#include<stdio.h>
int sum();	/* function prototype or function declaration */
int k=10;
int main()
{
	int c;
    k=20;
	c = sum();    	/*function calling */
	printf ("\nThe sum = %d", c);
}
int sum ()		/* Function Definition */
{
	int x, y;
	printf ("\nEnter the values of x and y:  ");
	scanf ("%d%d", &x, &y);
	/* return value to the calling function */
	return x+y;
}
