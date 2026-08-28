#include<stdio.h>
#include<stdlib.h>
#include<string.h>


// create LL with stud info and perform 1. insert node at sp 2. delete node with stud rno 3. reversal of LL
struct node {
  // student info
  int rno;
  float gpa;
  struct node *next;
};
/*
int main(){
  struct node *head, *second,*third;
  head = (struct node *)malloc(sizeof(struct node));
  second = malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));
  if (head == NULL || second == NULL || third == NULL){ 
    printf("Linked List failed to create ");
  }
  else{
    printf("enter 1st std roll num: ");
    scanf("%d",&head->rno);
    printf("enter 1st std gpa: ");
    scanf("%f",&head->gpa);
    head->next = second;

    printf("enter 2nd std roll num: ");
    scanf("%d",&second->rno);
    printf("enter 2nd std gpa: ");
    scanf("%f",&second->gpa);
    second->next = third;

    printf("enter 3rd std roll num: ");
    scanf("%d",&third->rno);
    printf("enter 3rd std gpa: ");
    scanf("%f",&third->gpa);

    printf("%d - %.2f -> ", head->rno, head->gpa);
    printf("%d - %.2f -> ", second->rno, second->gpa);
    printf("%d - %.2f -> NULL\n", third->rno, third->gpa);
  }

  int pos;
  printf("enter pos: ");
  scanf("%d",&pos);
  struct node *temp=head;
  
  struct node *newnode;
  newnode = malloc(sizeof(struct node));
  
  if(pos == 1){
    newnode->next = head;
    printf("enter new std roll num: ");
    scanf("%d",&newnode->rno);
    printf("enter new std gpa: ");
    scanf("%f",&newnode->gpa);
    head = newnode;
  }
  else{
    for(int i=1;i<pos-1 && temp!=NULL ;i++){
      temp = temp->next;
    }
    printf("enter new std roll num: ");
    scanf("%d",&newnode->rno);
    printf("enter new std gpa: ");
    scanf("%f",&newnode->gpa);
    newnode->next = temp->next;
    temp->next = newnode;
    // display of nodes
    while (temp != NULL) {
      printf("%d - %.2f -> ", temp->rno, temp->gpa);
      temp = temp->next;
    }
    printf("NULL");
  }

  return 0;
}

*/


int main() {

    struct node *head, *second, *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    if (head == NULL || second == NULL || third == NULL) {
        printf("Linked List failed to create\n");
        return 1;
    }

    // ---------------- CREATE 3 NODES ----------------

    printf("Enter 1st student roll num: ");
    scanf("%d", &head->rno);
    printf("Enter 1st student GPA: ");
    scanf("%f", &head->gpa);

    head->next = second;

    printf("Enter 2nd student roll num: ");
    scanf("%d", &second->rno);
    printf("Enter 2nd student GPA: ");
    scanf("%f", &second->gpa);

    second->next = third;

    printf("Enter 3rd student roll num: ");
    scanf("%d", &third->rno);
    printf("Enter 3rd student GPA: ");
    scanf("%f", &third->gpa);
    third->next = NULL;

    // ---------------- DISPLAY ORIGINAL LIST ----------------

    printf("\nOriginal Linked List:\n");

    struct node *temp = head;

    while (temp != NULL) {
        printf("%d - %.2f -> ", temp->rno, temp->gpa);
        temp = temp->next;
    }
    printf("NULL\n");

    // ---------------- INSERTION ----------------

    int pos;

    printf("\nEnter position to insert new student: ");
    scanf("%d", &pos);

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL) {
        printf("Memory not allocated\n");
        return 1;
    }

    // Take new student's information ONCE
    printf("Enter new student roll num: ");
    scanf("%d", &newnode->rno);

    printf("Enter new student gpa: ");
    scanf("%f", &newnode->gpa);


    // INSERT AT FIRST POSITION

    if (pos == 1) {
        newnode->next = head;
        head = newnode;
    }

    // INSERT AT OTHER POSITION

    else {

        temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            printf("Invalid position!\n");
            free(newnode);
        }
        else {
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }


    // ---------------- DISPLAY AFTER INSERTION ----------------

    printf("\nLinked List after insertion:\n");

    temp = head;       // IMPORTANT: reset temp to head

    while (temp != NULL) {
        printf("%d - %.2f -> ", temp->rno, temp->gpa);
        temp = temp->next;
    }

    printf("NULL\n");

    // ---------------- DELETE USING ROLL NUMBER ----------------
    int rno;
    printf("\nEnter student roll num to delete: ");
    scanf("%d", &rno);
    temp = head;

    struct node *prev = NULL;

    // Search for roll number
    while (temp != NULL && temp->rno != rno) {
        prev = temp;
        temp = temp->next;
    }

    // Roll number not found
    if (temp == NULL) {
        printf("Student with roll number %d not found\n", rno);
    }

    // Delete first node
    else if (prev == NULL) {
        head = temp->next;
        free(temp);
        printf("Student deleted successfully\n");
    }

    // Delete middle/last node
    else {
        prev->next = temp->next;
        free(temp);
        printf("Student deleted successfully\n");
    }


    // ---------------- DISPLAY AFTER DELETION ----------------

    printf("\nLinked List after deletion:\n");

    temp = head;

    while (temp != NULL) {
        printf("%d - %.2f -> ", temp->rno, temp->gpa);
        temp = temp->next;
    }

    printf("NULL\n");


    // ---------------- REVERSAL ----------------

    struct node *prev = NULL;
    struct node *current = head;
    struct node *next = NULL;

    while (current != NULL) {

        // Store next node
        next = current->next;

        // Reverse the link
        current->next = prev;

        // Move prev forward
        prev = current;

        // Move current forward
        current = next;
    }

    // New head
    head = prev;


    // ---------------- DISPLAY AFTER REVERSAL ----------------

    printf("\nLinked List after reversal:\n");

    temp = head;

    while (temp != NULL) {
        printf("%d - %.2f -> ", temp->rno, temp->gpa);
        temp = temp->next;
    }

    printf("NULL\n");


    return 0;
}
