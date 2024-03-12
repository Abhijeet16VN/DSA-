#include<stdio.h>
#include<stdlib.h>

struct Node

{
	int data;
	struct Node *link;
};

typedef struct Node *node;
node insert(node first);
node create_node();
void search(node first);

main()

{

	node first = NULL;
	int choice,pos,c;
	while(1)

	{

		printf("\n1-Insert\n2-search\n");
		scanf("%d",&choice);
		switch(choice)
		{

			case 1: first=insert(first);

			        break;
			 case 2: search(first);

                                break;
			default:exit(0);
		}
	}
}


node create_node()
{
	node t;
	int num;
	t=(node)malloc(sizeof(struct Node));
	if(t==NULL)
	{
		printf("Not created\n");
		exit(0);
	}
	printf("Read the value for the data part\n");
	scanf("%d",&t->data);
     t->link=NULL;
	return t;
}

node insert(node first)
{
	node t,c;
	t=create_node();
    if(first ==NULL)
	  return t;
	c=first;
	while(c->link !=NULL)
	{
		c=c->link;
	}
	c->link = t;
	return first;

}
void search(node first)
{

    int key,f=0;
    node c,t;
    printf("Enter the element to be searched\n");
    scanf("%d",&key);
    c=first;
    while(c!=NULL)
    {
        if (c->data==key)
        {
          f=1;
          t=c;
          break;
        }
        c=c->link;
    }

    if(f==0)
        printf("\nElement not found\n");
    else
    {
        printf("\nElement found\n");
        printf("\n%d",t->data);
    }

}
