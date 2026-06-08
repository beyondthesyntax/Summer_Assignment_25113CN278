#include <stdio.h>

int main() {
    int num, a=0, b=1, c, i;
    printf("Enter a number:");
    scanf("%d", &num);

    if (num==1){
        printf("Fibonacci number is %d",a);
    }
    else if(num==2){
        printf("Fibonaaci number is %d",b);
    }
    else{
        for(i=3; i<=num; i++){
            c = a+b;
            a=b;
            b=c;
        }
        printf("Fibonacci %d number is %d",num, b);
    }
    return 0;
}