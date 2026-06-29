#include<stdio.h>
void main() {
    int *p,*r;
    int a[]={1,2,3};
    printf("%d ",a);
    p=a;
    r=p+2;
    printf("\n%d %d %d",*p,*(p+1),*(p+2));
    printf("\n%d %d %d",*r,*(r-1),*(r-2));
    printf("\n%d %d %d",*a,*(a+1),*(a+2));

}
