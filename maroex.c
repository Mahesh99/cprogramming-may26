#include<stdio.h>
#define val 30
void main() {
    printf("val is %d",val);
    #undef val
    #define val 20
    printf("val is %d",val);

}