#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, vowels = 0, consonants = 0;

    printf("String daal: ");
    gets(str);

    for(i = 0; str[i]!= '\0'; i++) {
        char ch = str[i];
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d", consonants);
    return 0;
}