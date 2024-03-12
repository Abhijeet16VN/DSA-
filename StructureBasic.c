#include<stdio.h>
struct cricket_player
{
    char name[10];
    int high;
    float average;
}c;
struct cricket_player read(struct cricket_player);
void display(struct cricket_player);
int main()
{
    c=read(c);
    display(c);
}
struct cricket_player read(struct cricket_player c1)
{
    scanf("%s",c1.name);
    scanf("%d",&c1.high);
    scanf("%f",&c1.average);
    return c1;
}
void display(struct cricket_player c1)
{
    printf("Name=%s",c1.name);
    printf("High=%d",c1.high);
    printf("Average=%d",c1.average);
}
