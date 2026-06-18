#include <stdio.h>

int main() {
    int num, i;
    printf("Enter the number of element in array:");
    scanf("%d", &num);
    int arr[num];
    
    for (i=0; i<num; i++){
        printf ("Enter arr[%d]:", i);
        scanf("%d", & arr[i]);
    }

    int lar, sec_lar;

    if (arr[0] > arr[1]){
        lar = arr[0];
        sec_lar = arr[1];
    }
    else{
        lar = arr[1];
        sec_lar = arr[0];
    }

    for (i=2; i<num; i++){
        if(lar<arr[i]){
            sec_lar = lar;
            lar = arr[i];
        }
        else if(arr[i]>sec_lar && arr[i] != lar){
            sec_lar = arr[i];
        }
    }

    printf("The second largest element is %d", sec_lar);
    return 0;
}