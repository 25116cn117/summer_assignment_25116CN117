#include <stdio.h>

int main() {
    char str[200];
    int length = 0;

    printf("String daal: ");
    gets(str);

    while(str[length]!= '\0') {
        length++;
    }

    printf("Length: %d", length);
    return 0;
}