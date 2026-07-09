#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int count[256]={0}, i;

    printf("Enter a first string : ");
    gets(str1);
    printf("Enter a second string : ");
    gets(str2);

    if(strlen(str1) != strlen(str2)){
        printf("Strings are not Anagrams");
        return 0;
    }

    for(i=0; str1[i] != '\0'; i++){
        count[str1[i]]++;
    }
    for(i=0; str2[i] != '\0'; i++){
        count[str2[i]]--;
    }

    for(i=0; i<256; i++){
        if(count[i] != 0){
            printf("Strings are not Anagrams");
            return 0;
        }
    }
    printf("Strings are Anagrams");
    return 0;
}