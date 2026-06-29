#include<stdio.h>
int* test(int *a);
void main() {
    int *p,*r;
    int *a[5];
    int i=10,j=20;
    a[0]=&i;
    a[1]=&j;
    printf("%d %d\n",*a[0],*a[1]);
    printf("%d %d",**a,**(a+1));

    int *q,*s;
    q=&i;
    s=test(q);
    printf("\n%d ",*s);
}

int* test(int *a){
    return a;
}