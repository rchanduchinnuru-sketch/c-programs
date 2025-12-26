#include <stdio.h>
int main()
{
    int num,digit,result=0,place=1;
    printf("Enter a number:");
    scanf("%d",&num);
     if(num==0)
        result=1;
     while(num>0)
    {
        digit=num%10;
        if(digit==0)
            digit=1;
        result=result+digit*place;
        place=place*10;
        num=num/10;
    }
     printf("Number after replacing 0's with 1's: %d",result);
     return 0;
}
