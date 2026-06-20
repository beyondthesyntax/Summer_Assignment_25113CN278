#include <stdio.h>

int main() {
    int num, i, j, largest_prime = 1, is_prime;

    printf("Enter a number:");
    scanf("%d", &num);

    for (i=2; i<=num; i++){
        if(num%i == 0){
            is_prime = 1;
            for (j = 2; j * j <= i; j++){
                if (i%j == 0){
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime){
                largest_prime = i;
            }
        }
    }
    printf("The largest prime factor of %d is %d\n", num, largest_prime);
    return 0;
}