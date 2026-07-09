#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int count[256]={0}, i, max = 0;
    char maxchar;

    printf("Enter a string : ");
    gets(str);

    for(i=0; str[i] != '\0'; i++){
        count[str[i]]++;
    }

    for(i=0; i<256; i++){
        if(count[i]>max){
            max = count[i];
            maxchar = i;
        }
    }
    printf("Maximum occurring character is '%c' and it appears %d times", maxchar, max);
    return 0;
}