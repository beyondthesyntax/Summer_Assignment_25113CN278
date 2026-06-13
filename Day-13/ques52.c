#include <stdio.h>

int main() {
    int num,i, ecount = 0, ocount = 0;
    printf("Enter the nummber of elements in array:");
    scanf("%d", &num);
    int arr[num];

    printf("Enter arrays element:\n");
    for (i = 0; i < num; i++){
        printf("Enter arr[%d]:",i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < num; i++){
        if(arr[i] % 2 == 0){
            ecount++;
        }
        else{
            ocount++;
        }
    }

    printf("Even elements = %d\nOdd elements = %d", ecount, ocount);

    return 0;
}