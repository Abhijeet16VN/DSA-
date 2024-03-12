#include<stdio.h>
int copy_string(char[100],char[100]);
int main()
{
    char string1[100],string2[100];
    printf("Enter the string1:");
    gets(string1);
    copy_string(string1,string2);
}
int copy_string(char string1[100],char string2[100])
{
    int i;
    for(i=0;string1[i]!=0;i++)
    {
        string2[i]=string1[i];
    }
    string2[i] = '\0';                    //NULL TERMINATE THE DESTINATION STRING
    printf("String1=%s\n",string1);
    printf("String2=%s\n",string2);
}
