#include<stdio.h>
#define val 1
void main()
{
	#if !defined(number)
		printf("hello world");
	#endif
	#if !defined(number)
		#define number 100
	#endif
	#ifdef val
		#define pi 3.14
	#endif
	printf("\n The number = %d",number);
	printf("\n The value of pi = %f",pi);
}
