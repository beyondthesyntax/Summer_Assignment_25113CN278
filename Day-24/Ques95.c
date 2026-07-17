#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i, j = 0, maxlen = 0;
    printf("Enter a sentence : ");
    gets(str);

    for(i=0; ; i++){
        if(str[i] != ' ' && str[i] !='\0'){
            word[j++] = str[i];
        }
        else{
            word[j] = '\0';

            if (strlen(word) > maxlen){
                maxlen = strlen(word);
                strcpy(longest, word);
            }
        j = 0;

        if(str[i] == '\0')
            break;
        }
    }
    printf("longest word is %s", longest);
    return 0;
}