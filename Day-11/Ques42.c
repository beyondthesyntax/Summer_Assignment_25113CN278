//Function using no argument and return value
# include <stdio.h>

int maximum() {
    int a, b;

     printf ("Enter any two number:");
     scanf("%d %d", &a, &b);

     if (a>b){
        return a;
     }

     else {
        return b;
     }
}

int main() {
    int max;

    max = maximum();

    printf("The maximum number is %d", max);

    return 0;
}