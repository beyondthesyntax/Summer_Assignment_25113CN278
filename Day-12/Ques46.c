#include <stdio.h>

int armstrong(int num){
    int n = num, digit, count=0, sum=0,i;
     
    while (n>0){
        count++;
        n /= 10;
    }

    n=num;

    while(n>0){
       digit = n % 10;
       
       // Without pow() function
       int power = 1, i;
       for(i=1; i<=count; i++){
        power *= digit;
       }
       sum += power;
       n /= 10;
    }
    if(num==sum){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;

    printf("Enter a number:");
    scanf("%d", &n);

    if(armstrong(n)){
        printf("Number is an armstrong");
    }

    else{
        printf("Number is not an armstrong");
    }
    return 0;
}