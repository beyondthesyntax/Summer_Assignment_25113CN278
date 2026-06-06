#include <stdio.h>

int main () {
    int num,i,count=0;
    printf("Enter a positive number:");
    scanf("%d", &num);

    if(num==0 || num==1){
        printf("Given number is not a prime number");
    }
    else{
        for (i=2; i<=num/2 ; i++){
             if (num%i==0){
            count++;
             }
        }
        if (count==0){
        printf("Number is a prime");
        }
         else{
        printf("Number is not a prime");
        }
    }
    return 0;
}