#include<stdio.h>
int main()
{
    int n,factorial=1, i=1;
    printf("enter a positive integer:");
    scanf("%d",&n);
    if(n<0){
        printf("factorial is not defined for negitive numbers.\n");
    }
    else{
        while(i<=n)
        {
            factorial*=i;
            i++;
        }
        printf("factorial of %d is %d\n",n,factorial);
    }
    return 0;
}
    
