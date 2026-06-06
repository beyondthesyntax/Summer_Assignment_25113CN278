#include <stdio.h>

int main() {
    int num1, num2, x, y, rem, gcd, lcm;
     printf("Enter two numbers:");
     scanf("%d %d", &num1, &num2);

    x = num1;
    y = num2;
    
    while(y != 0){
        rem = x % y;
        x = y;
        y = rem;
     }
    gcd = x;

    lcm = (num1 * num2) / gcd;

     printf("LCM is %d", lcm);
     return 0;
}