#include<stdio.h>
int main()
{
    int a[20],i,n;
    printf("enter size of the array:");
    scanf("%d",&n);
    printf("enter elements of the array:");
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    for(i=n-1; i>=0; i--)
    printf("%d\t",a[i]);
    return 0;
}
