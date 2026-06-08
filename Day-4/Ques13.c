#include <stdio.h>

int main() {
    int num, a=0, b=1, c, i;

    printf("Enter a number:");
    scanf("%d", &num);

    printf("Fabonacci series is\t");

    for (i=1; i<=num; i++){
        printf("%d\t", a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}