#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int a = 0, b = 1, c, i;
    if(n==1)
        printf("%d ", a);
    else if(n==2)
        printf("%d %d ", a, b);
    else { 
        printf("%d %d ", a, b);
        for (i = 3; i <= n; i++)
        {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }
    return 0;
}
// 0 1 1 2 3 5 8 13 21 34
// a b c
//   a b
     