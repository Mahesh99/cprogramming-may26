#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    int a = rand()%10;
    // printf("%d", a);
    printf("Choose a number between 1 and 100: ");
    getchar();
    printf("Double it");
    getchar();
    printf("Add %d", a);
    getchar();
    printf("Divide by 2");
    getchar();
    printf("Subtract the original number");
    getchar();
    printf("Your number is %f", a/2.0);
    return 0;
}