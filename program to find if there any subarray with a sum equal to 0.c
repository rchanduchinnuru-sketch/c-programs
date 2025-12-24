#include<stdio.h>
int main()
{
    int n,i,j,sum;
    int arr[100];
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=1;j<n;j++)
        {
            sum+=arr[j];
            if(sum==0)
            {
                printf("yes,a subarray with sum 0 exists.\n");
                return 0;
            }
        }
    }
    printf("no subarray with sum 0 exists.\n");
    return 0;
}
