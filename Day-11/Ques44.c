//Fuction using argument and no return value
#include <stdio.h>

void factorial(int x) {
    int fact=1, i;
    for (i=1; i<=x; i++){
        fact *= i;
    }
    printf("The factorial is %d",fact);
}

int main() {
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    factorial(num);

    return 0;
}