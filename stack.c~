#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define max_size 1024
#define true 1
#define false 0

int S[max_size];
int top = -1;

void push(int n);
int pop();
int peek();
int size();
int num_entries();
int isEmpty();

int main(int argc, char * argv[])
{
	int value=false;

	push(4);
	push(7);	
	push(1);
	printf(" %d \n",peek());
	printf(" %d \n",pop());
	push(8);
	printf(" %d \n",pop());
	printf(" %d \n",isEmpty());
	printf(" %d \n",size());
	printf(" %d \n",num_entries());
	printf(" %d \n",pop());
	printf(" %d \n",pop());
	printf(" %d \n",pop());
	printf(" %d \n",isEmpty());
	return 0;
}
	    
	  
	    void push(int n)
	    {
		if(top == max_size-1)
		{
		    printf("Stack is full!");
		    return;
		}
		S[++top] = n;
	    }
	    
	    int pop()
	    {
		if(top == -1)
		{
		    printf("Stack is empty!");
		    return top;
		}
		return S[top--];
	    }
	    
	    int peek()
	    {
		if(top == -1)
		{
		    printf("Stack is empty!");
		    return top;
		}
		return S[top];
	    }
	    
	    int size()
	    {
		return max_size;
	    }
	    
	    int num_entries()
	    {
		return top+1;
	    }
	    
	    int isEmpty()
	    {
		if(top == -1)
		    return true;
		else
		    return false;
	    }
