#include<stdio.h>
void main() {
    int i=10;
    int *p=&i;
    int a[]={1,2,3};
    printf("%d %d",i,p);
    *p=20;
    printf("\n%d",i);
    p=p+1;
    p=a;
    printf("\n%d %d",i,p);
    printf("\n%d %d %d",*p,*(p+1),*(p+2));
}