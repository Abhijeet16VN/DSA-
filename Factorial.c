#include<stdio.h>
void fact(int);
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    fact(n);
}
void fact(int n)
{
    int i;
    int f=1;
    if(n>0)
    {
        for(i=n;i>0;i--)
        {
            f=f*i;
        }
        printf("%d=%d",n,f);

    }
    else
    {
        printf("Invalid number:");
    }
}
