#include <stdio.h>
int main()
{
    int i, n, count=0;
    printf("enter number n:");
    scanf("%d", &n);
    if (n<=1)
    printf("%d is not prime number \n", n);
    else {
        for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        count++;}
    if (count>2)
    printf("%d is not prime number\n", n);
    else
    printf("%d is prime number",n);}
    return 0;
}
