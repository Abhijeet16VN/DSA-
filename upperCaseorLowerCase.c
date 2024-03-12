#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if(ch>=48&&ch<=57)
    {
        printf("digit");
    }
     else if(ch>=65&&ch<=90)
    {
        printf("Upper case");
    }
     else if(ch>=97&&ch<=122)
    {
        printf("Lower case");
    }
    else
        printf("Special char");
}
