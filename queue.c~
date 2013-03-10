#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define max_size 5

#define true 0
#define false -1

int Q[max_size];
int front = 0;
int rear = 1;
int count = 0;


void enque(int x);
int deque();
int first();
int size();
int num_entries();
int isEmpty();


int main(int argc, char *argv[])
{
	int value=0;
	enque(4);
	enque(7);
	enque(4);
	enque(7);
	enque(4);
	printf(" %d \n",deque());
	printf(" %d \n",isEmpty());
	enque(7);
	printf(" %d \n",deque());
	printf(" %d \n",isEmpty());
	enque(4);
	enque(7);	
	enque(1);
	printf(" %d \n",first());
	printf(" %d \n",deque());
	enque(8);
	printf(" %d \n",deque());
	printf(" %d \n",isEmpty());
	printf(" %d \n",size());
	printf(" %d \n",num_entries());
	printf(" %d \n",deque());
	printf(" %d \n",deque());
	printf(" %d \n",deque());
	printf(" %d \n",isEmpty());
	return 0;
}

    void enque(int x)
    {
        if(front == rear)
        {
            printf("Queue is full!");
            return;
        }
        Q[rear] = x;
        count++;
        rear = (rear+1) % max_size;
    }
    
    int deque()
    {
        if(front == rear - 1)
        {
            printf("Queue is empty!");
            return -1;
        }
        front = (front+1)% max_size;
        count--;
        return Q[front];
    }
    
    int first()
    {
        if(front == rear - 1)
        {
            printf("Queue is empty!");
            return -1;
        }
        return Q[(front+1)%max_size];
    }
    
    int size()
    {
        return max_size;
    }
    
    int num_entries()
    {
        return count;
    }
    
    int isEmpty()
    {
        if(front == rear - 1)
            return true;
        else
            return false;
    }
