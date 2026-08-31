#include <stdio.h>
#include <stdlib.h>

void SLL(){
  struct node{
    int data;
    struct node *next;
  };
  struct node *head, *second, *third;
  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));
  if (head == NULL || second == NULL || third == NULL){
    printf("LL is not created ,mem not allocated");
  }
  else{
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;
  }
  printf("%d -> %d -> %d", head->data, second->data, third->data);
  return;
}


struct node{
  struct node *prev;
  int empId;
  float salary;
  struct node *next;
};

/*
void DLL(){
  struct node *head, *second, *third;
  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));
  if (head == NULL || second == NULL || third == NULL){
    printf("mem not allocated");
  }
  else{
    head->data = 10;
    head->next = second;
    second->prev = head;
    second->data = 20;
    second->next = third;
    third->prev = second;
    third->data = 30;
    third->next = NULL;
  }
  printf("%d -> %d -> %d -> NULL", head->data, second->data, third->data);
  return ;
}

void insertAtstart(){
  struct node *head,*second,*third;
  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));
  if (head == NULL || second == NULL || third == NULL){
    printf("mem not allocated");
    return ;
  }
  else{
    head->data = 10;
    head->next = second;
    second->prev = head;
    second->data = 20;
    second->next = third;
    third->prev = second;
    third->data = 30;
    third->next = NULL;
  }
  printf("%d -> %d -> %d -> NULL", head->data, second->data, third->data);
  
  struct node *newNode;
  newNode = (struct node*)malloc(sizeof(struct node));
  if(newNode != NULL){
    newNode->data = 05;
    newNode->prev = NULL;
    newNode->next = head;
    head->prev = newNode;
    //head = newNode;
  }
  printf("\nNULL <- %d <-> %d <-> %d <-> %d -> NULL", newNode->data, head->data, second->data, third->data);

  return ;
}

*/

void transverse(struct node *head){
  struct node *temp = head;
  while (temp != NULL){
    printf("%d & %.2f -> ", temp->empId,temp->salary);
    temp = temp->next;
  }
  printf("NULL\n");
}

void insertAtStart(struct node *head, int id , float sal){
  struct node *newNode = malloc(sizeof(struct node));
  if (newNode == NULL){
    printf("Memory allocation failed\n");
    return;
  }
  newNode->empId = id;
  newNode->salary = sal;
  newNode->next = head;
  head->prev = newNode;
}

int main(){
  struct node *head, *second, *third;
  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));
  if (head == NULL || second == NULL || third == NULL){
    printf("mem not allocated");
  }
  else{
    head->empId = 101;
    head->salary = 10000;
    head->next = second;
    second->prev = head;
    second->empId = 102;
    second->salary = 20000;
    second->next = third;
    third->prev = second;
    third->empId = 103;
    third->salary = 30000;
    third->next = NULL;
  }
  transverse(head);

  struct node *newNode = malloc(sizeof(struct node));
  if (newNode == NULL){
    printf("Memory allocation failed\n");
  }
  newNode->empId = 100;
  newNode->salary = 5000;
  newNode->next = head;
  head->prev = newNode;

  transverse(newNode);

  struct node *temp = newNode;
  while (temp->next->next != NULL){
    temp = temp->next;
  }
  free(temp->next);
  temp->next = NULL;
  tranverse(newNode);
  return 0;
}
