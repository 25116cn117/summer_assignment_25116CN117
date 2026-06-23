#include <stdio.h>

int main()
{
    int arr[100], n, sum, i, j;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter required sum: ");
    scanf("%d",&sum);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("Pair found: %d %d",arr[i],arr[j]);
                return 0;
            }
        }
    }

    printf("No pair found");

    return 0;
}