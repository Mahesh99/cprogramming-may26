#include<stdio.h>
void main()
{
    int a[100];
    int n,ind=-1,ele,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter number you want to search:");
    scanf("%d",&ele);

    for(i=0;i<n;i++) {
        if(ele==a[i]) {
            ind=i;
            break;
        }
    }
    if(ind==-1) {
        printf("Element not found");
    } else {
        printf("Element found at index %d",ind);
    }
    
}
