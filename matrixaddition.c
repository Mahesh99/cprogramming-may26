#include<stdio.h>
#include<conio.h>
void main()
 {
  int m,n,i,j,a[10][10],b[10][10],c[10][10];
 printf("\n enter the size of the matrix\n");
 scanf("%d %d", &m,&n);
 printf("enter the elements of matrix a\n");
 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
  {
   scanf("%d", &a[i][j]);
   }//forj
  }//fori
  printf("\nenter the elements of matrix b\n");
  for(i=0;i<m;i++)
  {
  for(j=0;j<n;j++)
  {
   scanf("%d",&b[i][j]);
   }//forj
   }//fori
 //addition of matrix
   for(i=0;i<m;i++)
   {
   for(j=0;j<n;j++)
   {
   c[i][j]=a[i][j]+b[i][j];
   }//forj
   }//for i
   //display resultant matrix
   for(i=0;i<m;i++)
   {
   for(j=0;j<n;j++)
   {
   printf("%d\t",c[i][j]);
   }
   printf("\n");
   }//fori
   getch();
   }
