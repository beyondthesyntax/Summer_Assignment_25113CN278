#include <stdio.h>

int main() {
    char str[] = "Hello World";
    int len = 0, i, j;
    char temp;

    while (str[len] != '\0'){
        len++;
    }

    for(i=0,j=len-1 ; i<j; i++,j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("The reverse string is \n%s", str);
    return 0;
}