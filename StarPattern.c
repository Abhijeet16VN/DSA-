#include<stdio.h>
void pattern(n);
void main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    pattern(n);
}
void pattern(int n)
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
