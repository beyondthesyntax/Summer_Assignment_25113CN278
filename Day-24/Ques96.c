#include <stdio.h>
#include <string.h>

int main() {
    char str[50], result[50];
    int i, j, k = 0, found;
    
    printf("Enter a string : ");
    gets(str);

    for(i=0; str[i] != '\0'; i++){
        found = 0;

        for(j=0; j<k; j++){
            if(str[i] == result[j]){
                found = 1;
                break;
            }
        }
        if(found == 0){
            result[k++] = str[i];
        }
    }
    result[k] = '\0';
    
    printf("String after removing duplicates is %s", result);
    return 0;
}