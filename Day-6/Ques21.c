#include <stdio.h>

int main() {
    int num, binary = 0, place = 1, rem;
    printf("Enter a decimal number:");
    scanf("%d", & num);

    while(num > 0){ 
        rem = num % 2;
        binary += (rem * place);
        place *= 10;
        num /= 2;
    }
    printf("Number in binary number system is %d", binary);
    return 0;
}