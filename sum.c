#include<stdio.h>
//function prototype
void sum();
void main() {
    //function call
    sum();

}

//function definition
void sum() {
    int a,b;
    printf("Enter values of a and b:");
    scanf("%d%d",&a,&b);
    printf("Sum of a and b is %d",a+b);

}

