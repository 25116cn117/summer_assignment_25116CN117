#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int count[256] = {0}; // sabko 0 se start karo
    int i;
    
    printf("String daal: ");
    gets(str);
    
    for(i = 0; str[i]!= '\0'; i++) {
        count[str[i]]++; 
    }
    
    printf("Character frequency:\n");
    for(i = 0; i < 256; i++) {
        if(count[i]!= 0) {
            printf("%c = %d baar\n", i, count[i]);
        }
    }
    return 0;
}