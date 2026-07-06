#include <stdio.h>

int main(){
    int num, power, i, result = 1;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("Enter the power to be taken:");
    scanf("%d", &power);

    for(i=1; i<=power; i++){
        result *= num;
    }
    printf("Result is %d", result);
    return 0;
}