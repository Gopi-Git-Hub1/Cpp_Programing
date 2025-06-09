#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct node {
   int data;
   struct node *next;
}var;
struct node *head = NULL;
void setDataIntoFront()
{
	var *frontNode = (var*)malloc(sizeof(var));
		printf("Enter the Data : ");
		scanf("%d",&frontNode->data);
		frontNode->next = NULL;
	if(head == NULL)
	{
		head = frontNode;	
	}
	else
	{
		frontNode->next = head;
		head = frontNode;	
	}
}
void setDataIntoStack(){
	struct node *newNode = NULL;
		newNode = (var*)malloc(sizeof(var));
		printf("Enter the Data : ");
		scanf("%d",&newNode->data);
		newNode->next = NULL;
	if(head == NULL)
	{
		head = newNode;	
	}
	else
	{
		var *endNode = head;
		while(endNode->next != NULL)
		{
			endNode = endNode->next;
		}
			endNode->next = newNode;

	}

}
void popDataFromFront()
{
	var *pop=head;
	if(head == NULL)
	{
		printf("List is already empty.");
	}
	head = pop->next;
	free(pop);
	printf("SUCCESSFULLY DELETED FIRST NODE FROM LIST\n");
}
void popDataFromStack()
{
	if (head == NULL) {
		printf("The list is empty.\n");
	}
	if (head->next == NULL) {
		free(head);
		printf("Only node of the list deleted successfully!!\n");
	}
	var *tmp1 = NULL;
	var *tmp2 = NULL;
	tmp1 = head;

	while(tmp1->next != NULL)
	{
	    tmp2 = tmp1;
	    tmp1 = tmp1->next;
	}
	tmp2->next = NULL;
	free(tmp1);
	printf("Node from the end of the list deleted successfully!!\n");

}
void displayStack()
{
	var *tmp = head;
	if (head == NULL) {
		printf("The list is empty.\n");
	}
	printf("Stack Data\n");
	while(tmp != NULL)
	{
		printf("%d ",tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
}
int main()
{
	int option;
	while(1)
	{
	printf("Choose Options:\n");
	printf("1) setDataIntoStack\n");
	printf("2) displayStack\n");
	printf("3) popDataFromStack\n");
	printf("4) exit\n");
	printf("5) setDataIntoFront\n");
	printf("6) popDataFromFront\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1: setDataIntoStack();

			break;
		case 2: displayStack();
			break;
		case 3: popDataFromStack();
			break;
		case 4:
			exit(0);
		case 5: setDataIntoFront();
			break;
		case 6: popDataFromFront();
			break;
		default :
			printf("Choose correct option...!\n");
			

	}
	}

	return 0;
}

