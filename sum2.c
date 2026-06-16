#include<stdio.h>
int sum();	/* function prototype */
int main()
{
	int c;
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
