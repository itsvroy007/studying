#include<stdio.h>
/*
Queues
used in cpu scheduling and traversal of tree

        FRONT           REAR
          ↓              ↓
        ┌────┬────┬────┬────┐
        │ 10 │ 20 │ 30 │ 40 │
        └────┴────┴────┴────┘
          ↑
        leaves first
in this queue , 10 goes 1st then front and rear value changes to 0 , then inserting 20 , 30 , 40 rear value got +1 each where as front remains the same at 0 

A Queue is a linear data structure that follows: FIFO first in first out
STACK                  QUEUE
LIFO                   FIFO
30 ← TOP              10 → leaves first
20                    20
10                    30
                      40 ← enters here

Queue uses two ends: FRONT , REAR 

front -> Points to the element that will be removed next.
rear -> Points to the position where a new element will be inserted.

4 main Queue operation 
enqueue → used for insertion/add elem with REAR pointer 
Before:
FRONT
↓
10   20   30    
          ↑
          REAR

here when 10 inserted both front and rear pointed to 10 then next insertion of 20 rear move +1 while front remained at 0 


dequeue → used for deletion with FRONT pointer
FRONT          Rear
↓               ↓
10   20   30   40
dequeue()
FRONT     Rear
↓          ↓
20   30   40

peek -> to view the topmost elem of queue or Returns the element at the front without removing it.
FRONT
↓
10   20   30 then peek would return 10 as answer

isEmpty() -> Checks whether the Queue contains no elements.
#define SIZE 5

int queue[SIZE];

int front = -1;
int rear = -1; if front = rear = -1 then queue is empty 

CIRCULAR QUEUE
Instead of wasting those empty spaces, a Circular Queue allows rear to wrap around to the beginning of the array.

Defing Queue size and their pointer
#define SIZE 5
int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value){
  if (rear == SIZE - 1){
    printf("Queue Overflow\n");
    return;
  }
  if (front == -1){
    front = 0;
  }
  rear++;
  queue[rear] = value;
}


int dequeue(){
  if (front == -1 || front > rear){
    printf("Queue Underflow\n");
    return -1;
  }
  int value = queue[front];
  front++;
  return value;
}

int peek(){
  if (front == -1 || front > rear){
    printf("Queue is empty\n");
    return -1;
  }
  return queue[front];
}

void display(){
  if (front == -1 || front > rear){
    printf("Queue is empty\n");
    return;
  }
  printf("Queue: ");
  for (int i = front; i <= rear; i++){
    printf("%d ", queue[i]);
  }
  printf("\n");
  return;
}

*/


#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

int isEmpty(){
  return front == -1 || front > rear;
}

int isFull(){
  return rear == SIZE - 1;
}

void enqueue(int value){
  if (isFull()){
    printf("Queue Overflow\n");
      return;
  }

  if (front == -1){
    front = 0;
  }

  rear++;
  queue[rear] = value;

  printf("%d enqueued\n", value);
  return;
}

int dequeue(){
  if (isEmpty()){
    printf("Queue Underflow\n");
    return -1;
  }
  int value = queue[front];
  front++;
  return value;
}

int peek(){
  if (isEmpty()){
    printf("Queue is empty\n");
    return -1;
  }

  return queue[front];
}

void display(){
  if (isEmpty()){
    printf("Queue is empty\n");
      return;
  }
  printf("Queue: ");
  for (int i = front; i <= rear; i++){
      printf("%d ", queue[i]);
  }
  printf("\n");
  return;
}


// circular 

void CircularEnqueue(int value){
    if ((rear + 1) % SIZE == front){
        printf("Circular Queue is Full\n");
        return;
    }

    if (front == -1){
        front = rear = 0;
    }
    else{
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = value;
}

void CircularDequeue(){
    int value;

    if (front == -1){
        printf("Circular Queue is Empty\n");
        return;
    }

    value = queue[front];

    if (front == rear){
        front = rear = -1;
    }
    else{
        front = (front + 1) % SIZE;
    }

    printf("Deleted element = %d\n", value);
}



int main(){
  enqueue(10);
  enqueue(20);
  enqueue(30);

  display();

  printf("Front element: %d\n", peek());

  printf("Dequeued: %d\n", dequeue());

  display();

  printf("Front element: %d\n", peek());

  return 0;
}

