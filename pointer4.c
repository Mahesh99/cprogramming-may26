#include<stdio.h>
void main() {
    int *p,*r;
    int a[]={1,2,3,4,5};
    printf("%d \n",a);
    p=a;
    int i;
    // for(i=0;i<5;i++) {
    //     printf("%d ",*(p+i));
    // }
    for(i=0;i<5;i++) {
        printf("%d ",*p);
        // printf("%d ",i[a]);
        p++;
    }
}
