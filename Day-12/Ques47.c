#include <stdio.h>

void fab(int num){
     int a=0, b=1, c, i;

    printf("Fabonacci series is:\n");

    for (i=1; i<=num; i++){
        printf("%d\t", a);
        c = a+b;
        a = b;
        b = c;
    }
}

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    fab(n);

    return 0;
}