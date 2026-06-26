 #include <stdio.h>

 int main(){
    int num=5, i, j;

    for (i=1; i<=num; i++){

       for (j=1; j<=num-i; j++){
           printf(" ");
       }

       for (j=0; j<i; j++){
        printf("%c", 'A' + j);
       }

       for (j=i-2; j>=0; j--){
        printf("%c", 'A' + j);
       }

        printf("\n");
    }
    return 0;
}