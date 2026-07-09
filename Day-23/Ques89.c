#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int count[256]={0}, i, found = 0;

    printf("Enter a string : ");
    gets(str);

    for(i=0; str[i] != '\0'; i++){
        count[str[i]]++;
    }

    for(i=0; str[i] != '\0'; i++){
        if(count[str[i]] == 1){
            printf("First non repeating character is %c", str[i]);
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("There is no non repeating character in the string");
    }
    return 0;
}