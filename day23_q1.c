#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0}; 
    int i;
    
    printf("String daal: ");
    scanf("%s", str);
    
    for(i = 0; str[i]!= '\0'; i++) {
        count[str[i]]++;

    }
    for(i = 0; str[i]!= '\0'; i++) {
        if(count[str[i]] == 1) {
            printf("First non-repeating: %c", str[i]);
            return 0;
        }
    }
    
    printf("Koi non-repeating character nahi mila");
    return 0;
}