#include <stdio.h>
/*
STACKS
A Stack is a linear data structure in which insertion and deletion are performed from the same end, called the TOP.
it follows -> LIFO Last In,First Out
ex-
top = -1 intialized
push(10)
┌────┐
│ 10 │ ← TOP
└────┘
push(20)
┌────┐
│ 20 │ ← TOP
├────┤
│ 10 │
└────┘

pop();
┌────┐
│ 10 │ ← TOP
└────┘

Main Stack Function
1. push() -> Adds an element to the top.
Before:
10
20 ← TOP     now if we push(30)
After:
10
20
30 ← TOP

2. pop() -> Removes the top element.
Before:
10
20
30 ← TOP    now if we pop()
After:
10
20 ← TOP

3. peek() -> Looks at the top element without removing it. { return topmost value }
10
20
30 ← TOP
peek() -> return 30

4. isfull() -> Checks whether the Stack contains no elements.
if top == Max-1 -> then it is full

5. isEmpty() -> Checks whether the Stack has reached its maximum capacity.
if top == -1 -> then it is underflow


Stack Overflow -> Trying to push() into a full Stack.
Stack Underflow -> Trying to pop() from an empty Stack.


void push(int value){
  if (top == SIZE - 1){
    printf("Stack Overflow\n");
    return;
  }
  top++;
  stack[top] = value;
}

int pop(){
  if (top == -1){
    printf("Stack Underflow\n");
    return -1;
  }
  int value = stack[top];
  top--;
  return value;
}

int peek(){
  if (top == -1){
    printf("Stack is empty\n");
    return -1;
  }
  return stack[top];
}



*/

#define SIZE 5

int stack[SIZE];
int top = -1;

int isEmpty(){
  return top == -1;
}

int isFull(){
  return top == SIZE - 1;
}

void push(int value){
  if (isFull()){
    printf("Stack Overflow\n");
    return;
  }
  top++;
  stack[top] = value;
  printf("%d pushed into Stack\n", value);
}

int pop(){
  if (isEmpty()){
    printf("Stack Underflow\n");
    return -1;
  }
  int value = stack[top];
  top--;
  return value;
}

int peek(){
  if (isEmpty()){
    printf("Stack is empty\n");
    return -1;
  }
  return stack[top];
}

void display(){
  if (isEmpty()){
    printf("Stack is empty\n");
    return;
  }
  printf("Stack: ");
  for (int i = top; i >= 0; i--){
    printf("%d ", stack[i]);
  }
  printf("\n");
}

void MenuDrivenProgram(){
  int choice;
  int value;

  while (1){
    printf("\n========== STACK MENU ==========\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Display\n");
    printf("5. Exit\n");
    printf("================================\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice){
    case 1:
      printf("Enter value to push: ");
      scanf("%d", &value);

      push(value);
      break;

    case 2:
      value = pop();
      if (value != -1){
        printf("%d popped from Stack.\n", value);
      }
      break;

    case 3:
      value = peek();

      if (value != -1){
        printf("Top element: %d\n", value);
      }
      break;

    case 4:
      display();
      break;

    case 5:
      printf("Exiting program...\n");
      return ;

    default:
      printf("Invalid choice! Please try again.\n");
    }
  }

  return;
}

int main(){
  push(10);
  push(20);
  push(30);

  display();

  printf("Top element: %d\n", peek());

  printf("Popped: %d\n", pop());

  display();

  printf("Top element: %d\n", peek());

  return 0;
}