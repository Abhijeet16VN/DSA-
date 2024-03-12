#include<stdio.h>
struct DOJ {
    int day;
    int month;
    int year;
}E;

struct Employee {
    char e_name[10];
    int id;
    struct DOJ D;
};
void read(struct Employee[],int);
void display(struct Employee[],int);
int main()
{
    int n;
    struct Employee E[20];
    printf("Enter the number of Employees");
    scanf("%d",&n);
    read(E,n);
    display(E,n);
    return 0;
}
void read(struct Employee E[],int n)
{int i;
for(i=0;i<n;i++)
{
    printf("Enter the employee name:");
    scanf("%s",E[i].e_name);
    printf("Enter the employee id:");
    scanf("%d",&E[i].id);
    printf("Enter the date of join:");
    scanf("%d",&E[i].D.day);
    printf("Enter the month of join:");
    scanf("%d",&E[i].D.month);
    printf("Enter the year of join:");
    scanf("%d",&E[i].D.year);
}
void display(struct Employee E[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Employee Name=%s",E[i].e_name);
        printf("Employee id=%d",E[i].id);
        printf("DAY-MONTH-YEAR=%d %d %d",E[i].D.day,E[i].D.month,E[i].D.year);
    }
}

}
