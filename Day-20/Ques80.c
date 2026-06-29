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

    for (i=0; i<c; i++){
        sum = 0;
        for (j=0; j<r; j++){
            sum += arr[j][i];
        }
        printf("The column %d sum is %d\n", i+1, sum);
    }
    return 0;
}