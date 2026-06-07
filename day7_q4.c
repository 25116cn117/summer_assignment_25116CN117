#include<stdio.h>
int reverseNumber(int n){
    if(n==0){
        return 0;
    }
    return (n%10)*1000+reverseNumber(n/10);
}
int main(){
    int n;
    printf("Enter a 4-digit number: ");
    scanf("%d",&n);
    printf("Reverse of %d is %d",n,reverseNumber(n));
    return 0;
}