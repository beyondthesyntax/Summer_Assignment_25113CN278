# include <stdio.h>

int main() {
    int r, c, i, j, sum;
    printf("Enter the number of rows : ");
    scanf("%d", &r);

    printf("Enter the number of columns : ");
    scanf("%d", &c);

    int arr[r][c];

    printf("Enter the elements of the matrix :\n");
    for (i=0; i<r; i++){
        for (j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for (i=0; i<r; i++){
        sum = 0;
        for (j=0; j<c; j++){
            sum += arr[i][j];
        }
        printf("The row %d sum is %d\n", i+1, sum);
    }
    return 0;
}