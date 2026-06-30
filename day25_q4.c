#include <stdio.h>

int main() {
    int arr[50], n, i;
    int largest, second;

    printf("Array ka size: ");
    scanf("%d", &n);

    printf("Elements daal: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = second = -999999;

    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second = largest; 
            largest = arr[i]; 
        }
        else if(arr[i] > second && arr[i]!= largest) {
            second = arr[i]; 
        }
    }

    if(second == -999999) {
        printf("Second largest nahi hai. Sab elements same hain");
    }
    else {
        printf("Second largest: %d", second);
    }

    return 0;
}