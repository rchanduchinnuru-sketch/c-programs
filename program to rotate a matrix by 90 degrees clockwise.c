#include<stdio.h>
int main()
{
    int n,i,j;
    int matrix[5][5],rotated[5][5];
    printf("enter order of matrix:");
    scanf("%d",&n);
    printf("enter elements of the matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            rotated[j][n-1-i]=matrix[i][j];
        }
    }
    printf("matrix after 90 degrees clockwise rotation\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",rotated[i][j]);
        }
        printf("\n");
    }
    return 0;
}
