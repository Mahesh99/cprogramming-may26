#include<stdio.h>
void main() {
    int n,i,j,k;
    printf("Enter value of n:");
    scanf("%d",&n); //5
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++) {
            printf(" ");
        }
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