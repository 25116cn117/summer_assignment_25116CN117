#include<stdio.h>
int sumdigits(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+sumdigits(n/10);

}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of digits of %d is %d",n,sumdigits(n));
    return 0;
}