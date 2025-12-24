#include<stdio.h>
int main()
{
    int n,i;
    int value=1;
    printf("enter the row number:\n");
    scanf("%d",&n);
    printf("nth row of pascal's triangle:\n");
    for(i=0; i<=n; i++)
    {
        printf("%d",value);
        value=value*(n-i)/(i+1);
    }
    return 0;
}
