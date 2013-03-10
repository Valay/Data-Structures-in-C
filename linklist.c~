#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

// Linked List functions

struct SingleLinkedList
{
	struct SingleLinkedList *next;
	int x;
	char y;
};
typedef struct SingleLinkedList Node;
Node *head;

int insertHead(Node *first,int i, char c);
int insertTail(Node *first,int i, char c);
int insertAt(Node *first,int i,char c,int pos);
int deleteHead(Node *first);
int deleteElement(Node *first,int i, char c);
int deleteTail(Node *first);
int length(Node *first);
void print_list(Node *first);
 

// interview questions

int remove_duplicates(Node *first);
char find_nth_to_last(Node *first, int n);

int main(int argc, char *argv[])
{
	int value;
	
	value = insertHead(head, 1, 'c');	
	value = insertTail(head, 4, 'e');
	value = insertTail(head, 5, 'f');
	value = insertHead(head, 6, 'u');
	value = insertAt(head,3,'k',1);
	value = insertHead(head, 2, 'z');
	value = insertHead(head, 8, 't');
	value = insertHead(head, 9, 's');
	print_list(head);
	printf("\n");
	//value = deleteHead(head);
	//printf(" Length = %d \n", length(head));
	//value = deleteElement(head,4,'y');
	//value = deleteHead(head);

	// ---------->Implement an algorithm to delete a node in the middle of a single linked list, given only access to that node.
	//EXAMPLE
	//Input: the node ‘c’ from the linked list a->b->c->d->e
	//Result: nothing is returned, but the new linked list looks like a->b->d->e
	/* Answer -> simply copy element from next node to given node and delete next node. */	
	
	// ---------> Implement an algorithm to find the nth to last element of a singly linked list.
	//printf("%c", find_nth_to_last(head,9));


	// --------->  Write codeto remove duplicates
	//value = remove_duplicates(head);
	
	//print_list(head);
	
	return 0;
}

// find nth to last
char find_nth_to_last(Node *first, int n)
{
	Node *p1,*p2;
	p1 = first;

	int iter=1;
	while(first != NULL && iter < n)
	{	
 		first = first->next;
		iter++;
	}

	if(first == NULL)
	{
		return -1;
	}

	p2 = first;

	while(p2->next != NULL)
	{
		p1 = p1->next;
		p2 = p2->next;
	}
	
	return p1->y;
}

// remove duplicates

int remove_duplicates(Node *first)
{
	Node *iter;
	Node *runner,*prev_runner;
	iter = first;

	if(iter == NULL || iter->next == NULL)
		return -1;	
	
	prev_runner = first;
	

	do
	{
		runner = iter->next;
		while(runner != NULL)
		{
			if(iter->y == runner->y)
			{
				prev_runner->next = runner->next;
				free(runner);
				runner = prev_runner->next;
			}
			else
			{
				prev_runner = runner;
				runner = runner->next;
			}
		}
		iter = iter->next;
		prev_runner = iter;
	}while(iter != NULL);
	return 0;
}


// General Linked list functions

int insertHead(Node *first,int i, char c)
{
	Node *newnode = (Node*)malloc(sizeof(Node));
	newnode->x = i;
	newnode->y = c;
	newnode->next = first;
	head = newnode;
	return 1;
}

int insertTail(Node *first,int i, char c)
{
	Node *newnode = (Node *)malloc(sizeof(Node));
	newnode->x = i;
	newnode->y = c;

	if(first == NULL)
	{
		head = newnode;
		newnode->next = NULL;
		return 1;
	}
		
	while(first->next != NULL)
	{	
		first = first->next;
	}
	
	first->next = newnode;
	newnode->next = NULL;
	return 1;
}


int insertAt(Node *first,int i,char c,int pos)
{
	int iter=1;

	Node *newnode = (Node *)malloc(sizeof(Node));
	newnode->x = i;
	newnode->y = c;

	if(first == NULL)
	{
		head = newnode;
		newnode->next = NULL;
     		return 1;
	}	

	while(first->next != NULL && iter < pos)
	{	
		first = first->next;
		iter++;
	}
	
	if(pos == 0)
	{
		newnode->next = first;
		head = newnode;
		return 1;	
	}

	
	if(iter == pos)
	{
		newnode->next = first->next;
		first->next = newnode;
		return 1;	
	}

	if(first->next == NULL)
	{
		return -1;
	}
}

int deleteHead(Node *first)
{
	if(first == NULL)
		return 0;

	head = first->next;
	free(first);
	return 1;	
}

int deleteTail(Node *first)
{
	if(first == NULL)
		return 0;
	
	if(first->next == NULL)
	{
		free(first);		
		head = NULL;
		return 1;	
	}
	
	Node *prev;
	prev = first;
	while(first->next != NULL)
	{
		prev = first;
		first = first->next;
	}
	
	prev->next = NULL;
	free(first);
	return 0;
}

int deleteElement(Node *first,int i, char c)
{
	if(first == NULL)
		return 0;
	
	Node *prev;
	prev = first;

	if(first->x == i || first->y == c)
	{
		head = head->next;
		free(first);
		return 0;
	}

	first = first->next;
	while(first != NULL && (first->x != i || first->y != c))
	{
		prev = first;
		first = first->next;			
	}

	if(first == NULL)
	{
		return -1;
	}
	else
	{
		prev->next = first->next;
		free(first);
	}
	return 0;	
}


int length(Node *first)
{
	int length=0;

	while(first != NULL)
	{
		length++;
		first = first->next;
	}
	return length;
}


void print_list(Node *first)
{
	printf("Head");
	while(first != NULL)
	{
		printf("%d %c ---->",first->x,first->y);
		first= first->next;
	}
	printf("NULL");
}
