#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node*next;
	
}*temp,*start;


void add_front()
{
	struct node*n=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter information");
	scanf("%d",&n->info);
	if(start=='\0')
	{
		start=n;
		start->next='\0';
	}
	else
	{
		n->next=start;
		start=n;
	}
		
}

void display()
{
	if(start=='\0')
	{
		printf("\n Linked List is empty");
	}
	else
	{
		start=temp;
		while(temp!='\0')
		{
			printf("%d",temp->info);
			temp=temp->next;
		}
	}
}

void main()
{
	display();
		add_front();
		display();

}
