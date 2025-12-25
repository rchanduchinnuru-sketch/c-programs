#include<stdio.h>
void reverseString(char str[],int index)
{
    if(str[index]=='\0')
    return;
    reverseString(str,index+1);
    printf("%c",str[index]);
}
int main()
{
    char str[100];
    printf("enter a string:");
    scanf("%s",str);
    printf("reversed string:");
    reverseString(str,0);
    return 0;
}
