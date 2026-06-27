#include <stdio.h>

int main() {
    int arr[] = {2,3,2,8,2,3,8,8,8};
    int size, i, j, count, freq=0, max;

    size = sizeof(arr)/sizeof(arr[0]);

    for(i=0; i<size; i++){
        count = 1;

        for (j=i+1; j<size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count > freq){
            freq = count;
            max = arr[i];
        }
    }
    printf("Maximun frequency number is %d\nFrequency is %d", max, freq);
    return 0;
}