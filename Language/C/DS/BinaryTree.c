
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *left;
  struct node *right;
};

struct node* createNode(int val){
  struct node* newNode = (struct node*)malloc(sizeof(struct node));
  newNode->data = val;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

int main(){
  struct node* firstNode = createNode(2);
  struct node* secondNode = createNode(3);
  struct node* thirdNode = createNode(4);
  struct node* fourthNode = createNode(5);

  firstNode->left = secondNode;
  firstNode->right = thirdNode;
  secondNode->left = fourthNode;
  return 0;
}