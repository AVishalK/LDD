#include<stdio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *link;
}
/*Declarations*/

struct node *create_list(struct node *start);
void display(struct node *start);
void count(struct node *start);
void search(struct node *start, int data);
struct node *addatbeg(struct node *start, int data);


/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<Main start>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>/*
int main(void)
{
  struct node *start=NULL;
  int choice,data,item,pos;
  while(1)
		{
    printf("1.Create List\n");
    printf("2.Display\n");
    printf("3.Count\n"); //currently its part of Display funtion only
    printf("4.Search\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
			switch(choice)
			{
				case 1: 
							start=create_list(start);
							break;
				case 2: 
							display(start);
							break;
				case 3: 
							count(start);
							break;
				case 4: 
							printf("enter the element to be searched\n");
							scanf("%d", &data);
							search(start,data);
							break;
				case 5:
				
				default: printf("Wrong choice \n");
			} /*End of switch*/
		} /*End of while*/
	return 0;
}/*End of main*/

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Funtion definations start>>>>>>>>>>>>>>>>>*/


/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<2 and 3 Display // Count >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
void display(struct node *start)
{
  struct node *p;  //int count;
  p = start;
  if(start == NULL)
	{
	  printf("List is emptly\n");
	  return;
	}
  printf("List is :\n");
  while(p !=NULL)
	{
	  printf("%d ",p->info);
	  p = p->link;
	               //count++     
	}
printf("\n\n"); //printf("%d",count) will display the count
} /*End of display*/

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<4 Search>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

void search(struct node *start, int item)
{
  struct node *p=start;
  int pos = 1;
  while(p!=NULL)
	{
    if(p->info == item)
		{
      printf("Item %d found at position %d\n",item,pos);
      return;
		}
    p=p->link;
    pos++;
	} /*End of while*/
  printf("Item %d is not found in list\n",item);
} /*End of search*/

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<5 add at beg >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/


