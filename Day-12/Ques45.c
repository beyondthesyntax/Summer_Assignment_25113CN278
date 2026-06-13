#include <stdio.h>

int palindrome(int num){
int n1 =num, digit, rev=0;

    while (num >0){
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if (n1==rev){
       return 1;
    }

    else{
        return 0;
    }
}

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", & n);

    if (palindrome(n)){
        printf("The number is palindrome");
    }
    else{
        printf("The number is not a palindrome");
    }

    return 0;
}