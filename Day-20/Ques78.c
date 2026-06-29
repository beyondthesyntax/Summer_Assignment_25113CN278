#include <stdio.h>

int main() {
    int r, c, i, j, flag = 0;
    printf("Enter the number of rows : ");
    scanf("%d", &r);
    printf("Enter the number of coloumns : ");
    scanf("%d", &c);

    if (r!=c){
        printf("The matrix is not symmetric because it is not a square matrix ");
    }
    else{
       int arr[r][c];
        printf("Enter the elements of the matrix :\n");
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                scanf("%d", & arr[i][j]);
            }
        }

        for(i=0; i<r; i++){
            for(j=i+1 ; j<c; j++){
                if(arr[i][j] != arr[j][i]){
                    flag = 1;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        if(!flag){
            printf("The matrix is a symmetric");
        }
        else{
        printf("The given matrix is not symmetric");
        }
    }
    return 0;
}