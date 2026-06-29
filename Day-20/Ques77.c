# include <stdio.h>

int main() {
    int r1, r2, c1, c2, i, j, k;
    printf("Enter rows and columns of the first matrix : ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of the second matrix : ");
    scanf("%d %d", &r2, &c2);

    int arr1[r1][c1], arr2[r2][c2];

    if(c1 != r2){
        printf("The matrices cannot be multiplied.");
    }
    else{
        printf("Enter elements of the first matrix :\n");
        for (i=0; i<r1; i++){
            for (j=0; j<c1; j++){
                scanf("%d", &arr1[i][j]);
            }
        }

        printf("Enter elements of the second matrix :\n");
        for (i=0; i<r2; i++){
            for (j=0; j<c2; j++){
                scanf("%d", &arr2[i][j]);
            }
        }
        
        int multi[r1][c2];

        //Multiplication
        for(i=0; i<r1; i++){
            for(j=0; j<c2; j++){
                multi[i][j]=0;
                for(k=0; k<c1; k++){
                    multi[i][j] += arr1[i][k]*arr2[k][j];
                }
            }
        }
    
        printf("The product of the given matrices are:\n");
        for(i=0; i<r1; i++){
            for(j=0; j<c2; j++){
                printf("%d ", multi[i][j]);
            }
            printf("\n");
        }
    }
    return 0;  
}