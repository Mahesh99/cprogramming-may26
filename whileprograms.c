//sum of digits
/*
 C program to find the sum of digits of a number:
 
*How it works:*
1. `num % 10` grabs the last digit
2. Add it to `sum` 
3. `num / 10` chops off the last digit
4. Repeat until `num` becomes 0

*Example:* Input `1234` → Output `Sum of digits of 1234 = 10`
*/
#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int temp = num; // keep original number for printing
    
    while (temp > 0) {
        digit = temp % 10;   // get last digit
        sum += digit;        // add to sum
        temp /= 10;          // remove last digit
    }
    
    printf("Sum of digits of %d = %d\n", num, sum);
    return 0;
}


/*
C program to check if a number is a palindrome:

*Logic:* 
1. Reverse the number by pulling digits with `% 10`
2. Compare reversed number with original
3. If same → palindrome. Example: `121`, `1331`

  */

#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num; // store original to compare later
    
    while (num > 0) {
        digit = num % 10;              // get last digit
        reversed = reversed * 10 + digit; // build reversed number
        num /= 10;                     // remove last digit
    }
    
    if (original == reversed) {
        printf("%d is a palindrome\n", original);
    } else {
        printf("%d is not a palindrome\n", original);
    }
    
    return 0;
}


/*
C program for Armstrong number check:

An *Armstrong number* = sum of its digits each raised to power of number of digits.  
Example: 153 = 1^3 + 5^3 + 3^3 = 153

*Test cases:*  
`153` → Armstrong ✓  
`370`, `371`, `407` → Armstrong ✓  
`123` → Not Armstrong ✗

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, sum = 0, digits = 0, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    
    // 1. Count digits
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    // 2. Sum of digits^digits
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    
    if (sum == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }
    
    return 0;
}
