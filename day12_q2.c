#include <stdio.h>
#include <math.h>
int isArmstrong(int n) {
    int sum=0, temp=n, digits=0;
    while(temp>0) { digits++; temp/=10; }
    temp=n;
    while(temp>0) {
        sum += pow(temp%10, digits);
        temp /= 10;
    }
    return sum == n;
}