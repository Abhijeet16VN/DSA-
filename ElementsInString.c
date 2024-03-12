#include<stdio.h>
void length(int,char[]);
int main()
{
    int len;
    char string[15];
    printf("Enter the string:");
    gets(string);
    length(len,string);
}
void length(int len,char string[15])
{
    len=0;
    int i;
    for(i=0;string[i]!=0;i++)
    {
        len++;
    }
    printf("%d is the number of elements in the string",len);
}
