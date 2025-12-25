#include<stdio.h>
#include<math.h>
int power(int,int);
int main()
{
    int base,expo;
    printf("enter base and exponent values:");
    scanf("%d%d",&base,&expo);
    printf("result=%d",pow(base,expo));
}
int power(int base,int expo)
{
    if(expo==0)
    return 1;
    else
    return base*power(base,expo-1);
}
