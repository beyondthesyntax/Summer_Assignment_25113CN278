#include <stdio.h>

int main() {
    int num, fact=1;

    printf("Enter a number:");
    scanf("%d", &num);

    while(num > 0){
        fact *= num;
        num--;
    }
    printf("The factorical is %d", fact);
    return 0;
}