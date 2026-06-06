#include <stdio.h>
 int main() {
    int num,digit,rev=0;
    printf("Enter a number:");
    scanf("%d", &num);

    while (num >0){
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    printf("The reverse of a number is %d",rev);
    return 0;
}