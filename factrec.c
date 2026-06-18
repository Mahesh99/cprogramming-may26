#include<stdio.h>
int fact(int);
void main() {
    int n,f;
    printf("Enter n:");
    scanf("%d",&n);
    f=fact(n);
    printf("The factorial is %d",f);
}
int fact(int n) {
    if(n==1)
        return 1;
    else
        return fact(n-1)*n;
}
/*
fact(4)
return fact(3)*4

fact(3)
return fact(2)*3

fact(2)
return fact(1)*2

fact(1)
return 1
*/