#include <stdio.h>

int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2, i, k = 0; 

    printf("Pehle array ka size: ");
    scanf("%d", &n1);
    printf("Elements: ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        merged[k] = arr1[i]; 
        k++;
    }

    printf("Dusre array ka size: ");
    scanf("%d", &n2);
    printf("Elements: ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
        merged[k] = arr2[i]; 
        k++;
    }

    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}