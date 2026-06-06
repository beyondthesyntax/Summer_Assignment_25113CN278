#include <stdio.h>
 int main() {
    int num,n1,digit,rev=0;
    printf("Enter a number:");
    scanf("%d", &num);

    n1 = num;

    while (num >0){
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    if (n1==rev){
        printf("The number is palindrome");
    }
    else{
        printf("The number is not a palindrome");
    }
    return 0;
}