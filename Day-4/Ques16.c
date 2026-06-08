#include <stdio.h>
#include <math.h>

int main() {
    int start, end, temp, digit, count, sum, i;
    printf("Enter the range(start end):");
    scanf("%d %d", &start, &end);

    printf("Armstrong number between %d and %d are\n", start, end);

    for(i=start; i<=end; i++){
        count=0;
        sum=0;

        temp=i;

        while(temp > 0){
            count++;
            temp /= 10;
        }

        temp=i;

        while(temp > 0){
             digit = temp % 10;
             sum += pow(digit,count);
             temp /= 10;
        }
        
        if (sum == i){
            printf("%d", i);
        }
    }
    return 0;
}