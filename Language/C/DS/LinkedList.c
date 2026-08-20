#include <stdio.h>
#include <stdlib.h> // malloc is imported from this lib

/*

Array -> arr[]={10,20,30,40} -> [10,20,30,40]
Arrays generally store elements next to each other in memory. [CONTINUOUS]

Linked list -> [10|next] → [20|next] → [30|next]
Nodes can be located in different places in memory.


singly linked list
A linked list is a data structure made up of separate pieces of memory called nodes.
-> it cant be revert or go backward

Each node contains:
Data — the value you want to store.
A pointer — the address of the next node.
Each node points where the next node is.

malloc() allocates memory on the heap.

we use dot to access members for normal structure
struct node n; then it is  n.data
for pointer struct we use -> (arrow)

Transversing a linked LIST
10 -> 20 -> 30 -> null existed linked list
use a temp pointer through which we print the data


INSERTION ->
1.at start
10 → 20 → 30 → NULL

After inserting 5:
5 → 10 → 20 → 30 → NULL

2.at end
10 → 20 → 30 → NULL

After inserting 40:

10 → 20 → 30 → 40 → NULL

3.at any specific position
10 → 20 → 30

Insert 25:

10 → 20 → 25 → 30

DELETION
1. first node
head
↓
10 → 20 → 30 → NULL

After: 20 → 30 → NULL

2. last node
10 → 20 → 30 → NULL

After: 10 → 20 → NULL

3. any / middle node


SEARCHING

10 → 20 → 30 → 40 → NULL
searching for the data to be equal to the target


COUNTING

10 → 20 → 30 → NULL
counting -> count = 3

*/

struct node{
  int data;
  struct node *next;
  // next is not another node , it is a pointer to a node
};

void CreatingNode(){
  struct node *head, *second;
  // head points to the first node.
  
  head = (struct node *)malloc(sizeof(struct node));
  // malloc is used -> to assign enough memory to store a node
  second = malloc(sizeof(struct node));
  if (head == NULL || second == NULL){ 
    // if any of head or 2nd isnt assigned value then this case
    printf("Linked List failed to create ");
  }
  else{
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = NULL; // null is used to terminate the node
    printf("%d -> %d -> NULL\n", head->data, head->next->data);
    free(second); // to free the used memory in which we stored our node
    free(head);   // after freeing memory we will not able to print val again as there is nothing stored in memory
  }
  return;
}

void traverse(struct node *head){
  struct node *temp = head;
  while (temp != NULL){
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}

void insertAtStart(struct node **head, int value){
  struct node *newNode = malloc(sizeof(struct node));
  if (newNode == NULL){
    printf("Memory allocation failed\n");
    return;
  }
  newNode->data = value;
  newNode->next = *head;
  *head = newNode;
}

void insertAtEnd(struct node **head, int value){
  struct node *newNode = malloc(sizeof(struct node));
  if (newNode == NULL){
    printf("Memory allocation failed\n");
    return;
  }
  newNode->data = value;
  newNode->next = NULL;
  
  /* If list is empty */
  if (*head == NULL){
    *head = newNode;
    return;
  }
  
  struct node *temp = *head;
  
  while (temp->next != NULL){
    temp = temp->next;
  }
  temp->next = newNode;
}

void insertAtPosition(struct node **head, int value, int position){
  /* Position 0 means insert at start */
  if (position == 0){
    insertAtStart(head, value);
    return;
  }
  
  if (position < 0){
    printf("Invalid position\n");
    return;
  }
  
  struct node *temp = *head;
  
  /*
    Move to the node BEFORE
    the position where we want to insert.
  */
  for (int i = 0; i < position - 1 && temp != NULL; i++){
    temp = temp->next;
  }

  /* Position doesn't exist */
  if (temp == NULL){
    printf("Invalid position\n");
    return;
  }
  
  struct node *newNode = malloc(sizeof(struct node));
  
  if (newNode == NULL){
    printf("Memory allocation failed\n");
    return;
  }
  
  newNode->data = value;
  
  newNode->next = temp->next;
  temp->next = newNode;
}

void deleteAtStart(struct node **head){
  if (*head == NULL){
    printf("List is empty\n");
    return;
  }
  
  struct node *temp = *head;
  
  *head = (*head)->next;
  
  free(temp);
}

void deleteAtEnd(struct node **head){
  if (*head == NULL){
    printf("List is empty\n");
    return;
  }

  /* Only one node */
  if ((*head)->next == NULL){
    free(*head);
    *head = NULL;
    return;
  }

  struct node *temp = *head;

  /* Stop at second-last node */
  while (temp->next->next != NULL){
    temp = temp->next;
  }
  
  free(temp->next);
  
  temp->next = NULL;
}

void deleteAtPosition(struct node **head, int position){
  if (*head == NULL){
    printf("List is empty\n");
    return;
  }
  
  if (position < 0){
    printf("Invalid position\n");
    return;
  }
  
  /* Position 0 */
  if (position == 0){
    deleteAtStart(head);
    return;
  }
  
  struct node *temp = *head;
  
  /*
    Move to the node BEFORE
    the node we want to delete.
  */
  for (int i = 0; i < position - 1 && temp != NULL; i++){
    temp = temp->next;
  }
  
  if (temp == NULL || temp->next == NULL){
    printf("Invalid position\n");
    return;
  }

  struct node *deleteNode = temp->next;

  temp->next = deleteNode->next;

  free(deleteNode);
}

void deleteByValue(struct node **head, int value){
  if (*head == NULL){
    printf("List is empty\n");
    return;
  }

  /* If first node contains the value */
  if ((*head)->data == value){
    deleteAtStart(head);
    return;
  }
  
  struct node *temp = *head;
  
  while (temp->next != NULL && temp->next->data != value){
    temp = temp->next;
  }

  /* Value not found */
  if (temp->next == NULL){
    printf("Value %d not found\n", value);
    return;
  }

  struct node *deleteNode = temp->next;

  temp->next = deleteNode->next;

  free(deleteNode);
}

int search(struct node *head, int value){
  struct node *temp = head;
  int position = 0;

  while (temp != NULL){
    if (temp->data == value){
      return position;
    }
    temp = temp->next;
    position++;
  }
  return -1;
}

int countNodes(struct node *head){
  int count = 0;
  struct node *temp = head;
  while (temp != NULL){
    count++;
    temp = temp->next;
  }
  return count;
}

int main(){
  struct node *head = NULL;
  /* Insert */
  insertAtEnd(&head, 10);
  insertAtEnd(&head, 20);
  insertAtEnd(&head, 30);

  printf("Initial list: ");
  traverse(head);
  
  /* Insert at start */
  insertAtStart(&head, 5);
  
  printf("After inserting 5 at start: ");
  traverse(head);
  
  /* Insert at position */
  insertAtPosition(&head, 15, 2);
  
  printf("After inserting 15 at position 2: ");
  traverse(head);
  
  /* Search */
  int position = search(head, 30);
  
  if (position != -1){
    printf("30 found at position %d\n", position);
  }
  else{
    printf("30 not found\n");
  }
  
  /* Count */
  printf("Number of nodes: %d\n", countNodes(head));
  
  /* Delete start */
  deleteAtStart(&head);
  
  printf("After deleting first node: ");
  traverse(head);
  
  /* Delete end */
  deleteAtEnd(&head);
  
  printf("After deleting last node: ");
  traverse(head);
  
  /* Delete by position */
  deleteAtPosition(&head, 1);
  
  printf("After deleting position 1: ");
  traverse(head);
  
  /* Delete by value */
  deleteByValue(&head, 20);
  
  printf("After deleting value 20: ");
  traverse(head);
  
  /* Free remaining nodes */
  freeList(&head);
  
  return 0;
}
