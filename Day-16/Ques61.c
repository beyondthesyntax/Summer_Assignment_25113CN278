#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = 6, expectedSum, actualSum = 0, missing;

    expectedSum = n*(n + 1) / 2;

    for (int i = 0; i < n-1; i++) {
        actualSum += arr[i];
    }

    missing = expectedSum - actualSum;

    printf("The missing Number is %d\n", missing);
    return 0;
}