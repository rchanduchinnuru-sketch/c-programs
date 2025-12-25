#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    int i, j, len = 0, flag = 0;
    printf("Enter a string: ");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    for (i=0;s[i]!='\0';i++)
        len++;
     for (i=0,j=len-1;i<j;i++,j--)
    {
        if (s[i]!=s[j])
        {
            flag=1;
            break;
        }
    }
     if (flag==1)
        printf("Not a palindrome string\n");
    else
        printf("Palindrome string\n");
        return 0;
}
