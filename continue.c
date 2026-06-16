#include<stdio.h>
void main() {
    int n,i;
    // printf("Enter a number:");
    // scanf("%d",&n); //17
    for(i=1;i<=10;i++) {
        if(i%2==0){
            continue;
        }
        printf("%d ",i);
    }
    
}
/*
skips current iteration and goes to next iteration
*/