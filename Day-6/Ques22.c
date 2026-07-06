#include<stdio.h>
#include<math.h>

int main() {
    int num, decimal = 0, i = 0 , rem;
    printf("Enter a binary number:");
    scanf("%d", &num);

    while(num > 0){
        rem = num % 10;
        decimal += rem * pow(2,i);
        num /= 10;
        i++;
    }
    printf("Number in decimal number system is %d", decimal);
    return 0;
}