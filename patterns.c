#include<stdio.h>
void main() {
    int n,i,j;
    printf("Enter value of n:");
    scanf("%d",&n); //5
    for(i=1;i<=n;i++){
       for(j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    
}

/*
*
* *
* * *
* * * *
* * * * *
*/