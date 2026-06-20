#include<stdio.h>
void main() {
    int p,np=-1,i,j,flag=0;
    printf("Enter a prime:");
    scanf("%d",&p);
    for(i=p+1;i<=9999999;i++) {
        flag=0;
        for(j=2;j<=i/2;j++) {
            // printf("%d %d",i,j);
            if(i%j==0) {
                flag=1;
                break;
            }
        }
        if(flag==0) {
            np=i;
            break;
        }
    }
    if(np==-1) {
        printf("No next prime");
    } else {
        printf("The next prime is %d",np);
    }
}
