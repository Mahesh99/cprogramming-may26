#include<stdio.h>
void main() {
    int n;
    int i,fact=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact*=i;
    printf("The factorial is %d",fact);
}