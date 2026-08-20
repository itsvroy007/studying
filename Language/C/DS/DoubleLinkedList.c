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
  int data;
  struct node *next;
};


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

int main(){
  insertAtstart();
  return 0;
}
