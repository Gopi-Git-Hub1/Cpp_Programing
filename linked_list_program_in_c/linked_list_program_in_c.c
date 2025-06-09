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
void setDataIntoEnd(){
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
void setDataSpecificPosition()
{
	int pos;
	int nNodes = 0;
	var *nofNodes = head;
	while(nofNodes != NULL){
		nofNodes = nofNodes->next;
		nNodes++;
	}
	printf("position : ");
	scanf("%d",&pos);
	if(pos < 1 )
		printf("invalid position..!\n");
	else if(pos == 1)
		setDataIntoFront();
	else if(pos > nNodes)
	{
		 printf("position is greater than number of nodes..!\n");
	}
	else if(pos <= nNodes)
	{
		var *tmp  = head;
		var *newNode = (var*)malloc(sizeof(var));
		printf("Enter the Data : ");
		scanf("%d",&newNode->data);
		newNode->next = NULL;
			for(int i =1;i<pos-1;i++)
			{
				tmp=tmp->next;
			}
			 newNode->next = tmp->next;
			 tmp->next = newNode;
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
void popDataFromEnd()
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
void popDataSpecificPosition()
{

}
void displayData()
{
	var *tmp = head;
	if (head == NULL) {
		printf("The list is empty.\n");
	}
	int n = 0;
	printf("Stack Data\n");
	while(tmp != NULL)
	{
		printf("%d ",tmp->data);
		tmp = tmp->next;
		n++;
	}
	printf("\n");
	printf("no of nodes : %d\n",n);
}
int main()
{
	int option;
	while(1)
	{
	printf("Choose Options:\n");
	printf("1) setDataIntoEnd\n");
	printf("2) displayData\n");
	printf("3) popDataFromEnd\n");
	printf("4) exit\n");
	printf("5) setDataIntoFront\n");
	printf("6) popDataFromFront\n");
	printf("7) setDataSpecificPosition\n");
	printf("8) popDataSpecificPosition\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1: setDataIntoEnd();

			break;
		case 2: displayData();
			break;
		case 3: popDataFromEnd();
			break;
		case 4:
			exit(0);
		case 5: setDataIntoFront();
			break;
		case 6: popDataFromFront();
			break;
		case 7: setDataSpecificPosition();
			break;
		case 8: popDataSpecificPosition();
			break;
		default :
			printf("Choose correct option...!\n");
			

	}
	}

	return 0;
}

