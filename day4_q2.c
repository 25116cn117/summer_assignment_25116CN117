//day4_q1.c
//Question 1;WAP to find nth fibonacci term.
#include <stdio.h>
int findFibonacci(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, next;
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n < 0) printf("Invalid input\n");
    else printf("Fibonacci number: %d\n", findFibonacci(n));
    return 0;
}
