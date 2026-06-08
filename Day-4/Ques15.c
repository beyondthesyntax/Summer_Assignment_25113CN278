#include <stdio.h>
#include <math.h>

int main(){
    int num,n,digit,count=0,sum=0,i;
    
    printf("Enter a number:");
    scanf("%d", &num);
    n=num;
    
    while (n>0){
        count++;
        n /= 10;
    }

    n=num;

    while(n>0){
       digit = n % 10;
       sum += pow(digit,count);
       n /= 10;
    }
    if(num==sum){
        printf("Number is an armstrong");
    }
    else{
        printf("Number is not an armstrong");
    }
    return 0;
}