#include<stdio.h>
void main() {
    int n,i,flag=0;
    printf("Enter a number:");
    scanf("%d",&n); //17
    for(i=2;i<=n/2;i++) {
        if(n%i==0) {
            flag=1;
            break;
        }
    }
    if(flag==0) {
        printf("It is Prime");
    } else {
        printf("It is not Prime");
    }
}
/*
17
1 and itslef
8

16
8

i=1;i<=10
10 iterations
break all future iteration will be terminated
*/