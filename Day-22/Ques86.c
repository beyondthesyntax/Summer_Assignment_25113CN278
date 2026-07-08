#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "The quick brown fox jumps over the lazy dog";
    int i=0, count = 0;

    while(str[i] != '\0'){
        if(i==0 && str[i] != ' ' || str[i] != ' ' && str[i-1] == ' '){
            count++;
        }
        i++;
    }
    printf("Number of words in the sentence is %d", count);
    return 0;
}