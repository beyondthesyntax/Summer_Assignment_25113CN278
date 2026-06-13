#include <stdio.h>

int main() {
    int num, sum = 0;
    float avg;
    printf("Enter the nummber of elements in array:");
    scanf("%d", &num);
    int arr[num],i;

    for (i = 0; i < num; i++){
        printf("Enter arr[%d]:",i);
        scanf("%d", &arr[i]);

        sum += arr[i];
    }

    avg =(float) sum/num;
    
    printf ("The sum of array is %d\n", sum);
    printf ("The average of array is %.2f", avg);

    return 0;
}