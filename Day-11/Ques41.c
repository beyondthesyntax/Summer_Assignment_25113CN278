//Function using argument and return value
#include <stdio.h>

int add(int x, int y){
    return x + y;
}

int main() {
    int a, b, result; 
    printf("Enter two number:");
    scanf("%d %d", &a, &b);

    result =add(a,b);

    printf("The sum is %d", result);

    return 0;
}