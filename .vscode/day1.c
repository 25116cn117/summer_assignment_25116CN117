#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The sum of %d and %d is %d",a,b,a+b);
    printf("press enter to exit");
    getchar();
    getchar();
    return 0;
}