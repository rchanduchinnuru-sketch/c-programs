#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,max,min;
    printf("eneter two numbers:");
    scanf("%d%d",&a,&b);
    max=(a+b+abs(a-b))/2;
    min=(a+b-abs(a-b))/2;
    printf("maximum=%d\n",max);
    printf("minimum=%d\n",min);
    return 0;
}
