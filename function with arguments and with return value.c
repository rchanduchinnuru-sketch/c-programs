#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int main()
{
    int result;
    result=add(20,40);
    printf("sum=%d",result);
    return 0;
}
