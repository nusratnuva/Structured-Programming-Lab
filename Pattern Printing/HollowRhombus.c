#include<stdio.h>
int main()
{
    int n, row, col;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=n-row; col>=1; col--)
        {
            printf(" ");
        }
        for(col=1; col<=n; col++)
        if(row==1||row==n||col==1||col==n)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
        printf("\n");
    }
}