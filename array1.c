#include<stdio.h>
void main()
{
    // int a[5];
    int a[5]={1,2,3,4,5};
    int i;
    // int a[] = {1,2,3,4};
    // int a[5]={1,2,3};
    // int a[5]={0};
    printf("%d ",a[0]);
    printf("%d ",a[4]);
    //index
    //0,1,2...n-1, where n is the size of the array

    //modifying
    a[4]=10;
    printf("%d ",a[4]);

    printf("\n");
    for(i=0;i<5;i++) 
        printf("%d ",a[i]);

}