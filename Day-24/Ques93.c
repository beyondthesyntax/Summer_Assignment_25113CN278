#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], temp[100];

    printf("Enter first string : ");
    gets(str1);
    
    printf("Enter second string : ");
    gets(str2);
    
    if(strlen(str1) != strlen(str2)){
        printf("strings are not rotation");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if(strstr(temp, str2))
        printf("Strings are rotation");
    else
        printf("strings are not rotation");
    return 0;
}