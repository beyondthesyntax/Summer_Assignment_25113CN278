 #include <stdio.h>

 int main(){
    int num=5, i, j;

    for (i=0;i<num; i++){
        for (j=1; j<=num*2-1 ; j++){ 
            if(j<i+1 || j>num*2-i-1){
                printf(" ");
            }
            else{
            printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}