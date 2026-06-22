#include <stdio.h>

int rev(int num, int reverse) {
    if(num == 0){
        return reverse;
    }
    else {
        return rev(num / 10, reverse * 10 + num % 10);
    }
}

int main() {
    int n;

    printf("Enter a number:"); 
    scanf("%d", &n);

    printf("The reversed number is %d", rev(n,0));
    return 0;
}