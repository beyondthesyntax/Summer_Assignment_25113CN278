#include <stdio.h>

int sum(int num){
    if(num == 0){
        return 0;
    }
    else {
        return num%10 + sum(num/10);
    }
}

int main() {
    int n;

    printf("Enter a number:"); 
    scanf("%d", &n);

    printf("The sum of digits are %d", sum(n));
    return 0;
}