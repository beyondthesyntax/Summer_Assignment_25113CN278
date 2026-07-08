#include <stdio.h>

int main() {
    char str[] = "Hello World C";
    int i, j=0;

    for(i=0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    printf("String after removing spaces is %s", str);
    return 0;
}