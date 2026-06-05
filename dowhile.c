#include<stdio.h>
void main() {
    int n,i;
    printf("Enter value of n:");
    scanf("%d",&n); //5

    i=1;
    do {
        printf("%d ",i);
        i++;
    } while(i<=n);

}