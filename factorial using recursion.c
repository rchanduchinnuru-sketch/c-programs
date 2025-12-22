#include<stdio.h>
int factorial(int n)
{
    if(n<=1)
    return 1;
    return n*factorial(n-1);
}
int main()
{
    int n;
    printf("enter a positive integer:");
    scanf("%d",&n);
    if(n<0){
        printf("factorial is not defined for negitive numbers.\n");
    }
    else{
        printf("factorial of %d is %d\n",n,factorial(n));
    }
    return 0;
}
    
