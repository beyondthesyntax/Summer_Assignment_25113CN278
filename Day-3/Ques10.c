#include <stdio.h>

int main () {
    int num,i,j,count;
    printf("Enter a number:");
    scanf("%d", &num);

    for (i=2; i<=num; i++){
        count = 0;

        for(j=2; j<=i/2; j++){
            if(i % j == 0){
                count++;
                break;
            }
        }
        if (count==0){
            printf("%d\n",i);
        } 
    }
    return 0;
}