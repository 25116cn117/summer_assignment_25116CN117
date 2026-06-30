#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, count = 0;
    
    printf("Sentence daal: ");
    gets(str); 
    
    for(i = 0; str[i]!= '\0'; i++) {
        if(str[i]!= ' ' && (i == 0 || str[i-1] == ' ')) {
            count++;
        }
    }
    
    printf("Total words: %d", count);
    return 0;
}