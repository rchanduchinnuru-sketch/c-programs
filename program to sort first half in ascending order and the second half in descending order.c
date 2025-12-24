#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp,mid;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    mid=n/2;
    for(i=0;i<mid-1;i++)
    {
        for(j=i+1;j<mid;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]==temp;
            }
        }
    }
    for(i=mid;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("resultant array:\n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}
