#include<stdio.h>
void main()
{
     int radius;
    float area,circum;
    printf("\n enter radius of a circle");
    scanf("%d",&radius);
    areacircum(radius, &area,&circum);
    printf("area=%f", area);
    printf("\n circumference=%f",circum);
}//main
areacircum(int r,float *a, float  *c) {
    *a=3.14*r*r;
    *c=2*3.14*r;
}
    
