#include <stdio.h>

int main() {
    int arr[50], n, i, key, found = 0;

    printf("Array ka size: ");
    scanf("%d", &n);

    printf("Elements daal: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Konsa element dhundna hai: ");
    scanf("%d", &key);

    
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element %d position %d pe mila", key, i);
            found = 1;
            break; 
        }
    }

    if(found == 0) {
        printf("Element nahi mila array me");
    }

    return 0;
}