#include <stdio.h>
int main()
{
    int i, n, count=0;
    printf("enter number n:");
    scanf("%d", &n);
        i=1;
        while(i<=n)
    {
        if(n%i==0)
        count++;
        i++;
    }
    if (count==2)
    printf("%d is  prime number\n", n);
    else
    printf("%d is not prime number",n);
    return 0;
}
