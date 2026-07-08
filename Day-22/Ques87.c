#include <stdio.h>

int main() {
    char str[50];
    int i, j, count;

    printf("Enter a string :\n");
    gets(str);

    printf("The frequecy of characters are:\n");
    for(i=0; str[i] != '\0'; i++){
        count = 1;

        if(str[i] == '*'){
            continue;
        }

        for(j=i+1; str[j] != '\0'; j++){
            if(str[i] == str[j]){
                count++;
                str[j] = '*'; //mark duplicate character
            }
        }
        printf("%c = %d\n", str[i], count);
    }
    return 0;
}