#include<stdio.h>
int main()
{
    int a[20],i,n,max,min;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    printf("maximum elements in array is:%d\n",max);
    printf("minimum element in array is:%d",min);
    return 0;
}
