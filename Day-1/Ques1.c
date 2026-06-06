#include <stdio.h>

int main() {
    int num, i, sum=0;
    printf("Enter a number:");
    scanf("%d", &num);

    for (i=1; i<=num; i++){
        sum += i;
    }
    printf("The sum of first %d natural number is %d", num, sum);
    return 0;
}