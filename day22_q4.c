#include <stdio.h>
#include <string.h>

int main() {
    char str[200], newStr[200];
    int i, j = 0;
    
    printf("String with spaces daal: ");
    gets(str);
    
    for(i = 0; str[i]!= '\0'; i++) {
        if(str[i]!= ' ') { 
            newStr[j] = str[i]; 
            j++;
        }
    }
    newStr[j] = '\0'; 
    
    printf("Bina space ke: %s", newStr);
    return 0;
}