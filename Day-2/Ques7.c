#include <stdio.h>
 
int main() {
    int num,digit,prod=1;
    printf("Enter a number:");
    scanf("%d", &num);

    while(num > 0){
        digit = num % 10;
        prod *= digit;
        num /= 10;
    }
    printf("The product of digits %d", prod);
    return 0;
}