#include <stdio.h>

int is_perfect(int num){
    int i, sum = 0;

    for(i=1; i <= num/2; i++){
        if(num%i == 0){
            sum += i;
        }
    }
    if(sum == num){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    if(is_perfect(n)){
        printf("The number is a perfect number");
    }
    else{
        printf("The number is not a perfect number");
    }
    return 0;
}