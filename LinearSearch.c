#include<stdio.h>
void main()
{
int a[]={10,20,30,40,50};
int k;
int n=sizeof(a)/sizeof(a[0]);
printf("Enter the element to be searched:");
scanf("%d",&k);
int index=search(a,n,k);
if(index!=-1)
printf("Element %d is found at %d",k,index);
else
printf("Element %d not found\n",k);
}
int search(int a[], int n, int k)
{int i;
for(i=0;i<=n;i++)
    {
         if(a[i]==k)
          return i;
    }
return -1;
}
