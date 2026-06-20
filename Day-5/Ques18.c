#include <stdio.h>

int main() {
    int num, n, i, digit, fact, sum = 0;
    printf("Enter a number:");
    scanf("%d", &num);

    n = num;

    while (n > 0){
        digit = n % 10;

        fact = 1;
        for (i=1; i <= digit; i++){
            fact *= i;
        }
         sum += fact;
         n /= 10;
    }

    if (sum == num){
        printf("The number is a strong number");
    }
    else{
        printf("The number is not a strong number");
    }
    return 0;
}