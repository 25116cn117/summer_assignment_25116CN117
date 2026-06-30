#include <stdio.h>

int main() {
    char str[200], newStr[200];
    int i, j = 0;

    printf("String daal: ");
    gets(str);

    for(i = 0; str[i]!= '\0'; i++) {
        char ch = str[i];
        if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
             ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')) {
            newStr[j] = ch;
            j++;
        }
    }
    newStr[j] = '\0';

    printf("Bina vowels ke: %s", newStr);
    return 0;
}