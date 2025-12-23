#include<stdio.h>
int add()
{
    int a=30, b=20;
    printf("sum=%2d",a+b);
    return a+b;
}
int main()
{
    int result;
    result=add();
    printf("sum=%d",result);
    return 0;
}
