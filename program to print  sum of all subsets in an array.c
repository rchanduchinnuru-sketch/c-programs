#include <stdio.h>
#include <math.h>
int main()
{
    int a[20],n,i,j;
    int totalSubsets,sum;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    totalSubsets=pow(2,n);
    printf("Sums of all subsets:\n");
    for(i=0;i<totalSubsets;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            if(i&(1<<j))
                sum+=a[j];
        }
        printf("%d\n",sum);
    }
    return 0;
}
