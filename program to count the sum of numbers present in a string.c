#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    int sum=0,num=0;
    printf("enter a string:");
    scanf("%s",str);
    for(int i=0;str[i]!='\0'; i++)
    {
        if(isdigit(str[i]))
        {
            num=num*10+(str[i]-'0');
        }
        else{
            sum+=num;
            num=0;
        }
    }
    sum+=num;
    printf("sum of numbers in the string=%d\n",sum);
    return 0;
}
