#include <stdio.h>

int fib(int num) {
    if(num == 0){
        return 0;
    }
    else if(num == 1){
        return 1;
    }
    else {
        return fib(num-1) + fib(num-2);
    }
}

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    printf("The fibonacci %d number is %d",n, fib(n));
    return 0;
}