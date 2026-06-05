#include<stdio.h>
void main() {
    float c,f;
    printf("Enter temp in celcius:");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("The temp in fahrenheit is %f",f);
}