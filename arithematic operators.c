#include<stdio.h>
void main()
{
    int x,y,add,sub,mul,mod;
    float div;
    printf("enter any two values:");
    scanf("%d%d",&x,&y);
    add = x+y;
    sub = x-y;
    mul = x*y;
    mod =x%y;
    div = x/y;
    printf("addition is = %d",add);
    printf("\nsubstraction is = %d",sub);
    printf("\nmultiplication is = %d",mul);
    printf("\nmodulud is = %d",mod);
    printf("\ndivision is = %d",div);
}
