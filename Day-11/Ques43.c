//Function using no argument and no return value
#include <stdio.h>

void is_prime() {
    int num,i, count=1;

    printf("Enter a number:");
    scanf("%d", &num);

    if (num<=1){
        printf("Number is not a prime");
    }

    else {
        for (i=2; i <= num/2; i++){
            if (num%i == 0){
                count = 0;
                break;
            }
        
        }
    
            if (count){
                printf("Number is a prime");
            }
            else {
                printf("Number is not a prime");
            }
    }
}

int main() {
    is_prime();
    return 0;
}