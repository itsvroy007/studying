#include<iostream>
using namespace std;

class Node{
public:
  int data;
  Node* next;

  Node(int val){
    data = val;
    next = NULL;
  }
};

class List{
  Node* head;
  Node* tail;
public:
  List(){
    head = tail = NULL;
  }

  void push_front(int val){
    // it is creating a new node then push another node at front  
    Node* newNode = new Node(val); // use of new keyword to create a dynamic obj & even worked after calling function 
    // Node newNode(val); statically newNode->data = val; as we move out of the function static data the data will be deleted 
    if(head == NULL){
      head = tail = newNode;
      return;
    }
    else 
    {
      newNode ->next = head;
      head = newNode;
    }
  }

  void push_back(int val){
    Node* newnode = new Node(val);
    if(head == NULL){
      head = tail = newnode;
    }
    else{
      tail->next = newnode;
      tail = newnode; 
    }
  }

  void pop_front(){
    /*
    assume it to be like 1->2->3->4 
    we want to delete 1st node so we need to get to temp node to points it's next to null 
    */
    if(head == NULL){
      cout<<"Linked List is empty"<<endl;
      return ;
    }
    Node* temp = head;
    head = temp->next; // head->next same thing
    temp->next = NULL;
    delete temp; // use of delete keyword as we dynamic allocate the mem for node by using new keyword
  }

  void pop_back(){
    /*
    assume it to be like 1->2->3->4 
    we want to delete 4 last node so we need to get to 3rd node then points it's next to null 
    */
    if(head == NULL){
      cout<<"Linked List is empty"<<endl;
      return ;
    }
    Node* temp = head;
    while(temp->next != tail){
      temp = temp->next;
    }
    temp->next = NULL;
    delete tail;
    tail = temp;
  }
  
  void printLL(){
    Node* temp = head;
    while(temp != NULL){
      cout<<temp->data<<" -> ";
      temp = temp->next;
    }
    cout<<"NULL";
  }

};

/*
4 main parts 
1. push_front 3.pop_front 
2. push_back  4.pop_back

if head == null then we create a new node & store a val in new node 
*/
int main(){
  List ll;
  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(3);
  ll.printLL();
  return 0;
}