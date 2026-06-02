#include<stdio.h>
void main() {
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks>=90) {
        printf("A grade");
    } else if (marks>=80) {
        printf("B grade");
    } else if (marks>=70) {
        printf("C grade");
    } else {
        printf("No grade");
    }
}
