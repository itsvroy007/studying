#include<stdio.h>
#include<string.h>
// Linear Search
void LinearSearch(){
  int size;
  printf("enter the size of arr: ");
  scanf("%d",&size);
  int arr[size];
  printf("enter elem in arr: ");
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  int target;
  int position,flag =0;
  printf("\nenter elem to target: ");
  scanf("%d",&target);
  for(int i=0;i<size;i++){
    if(target == arr[i]){
      position=i;
      flag = 1;
      break;
    }
  }
  if(flag ==1){
    printf("first occurence of elem found at position: %d",position);
  }
  else printf("elem not found");
  return ;
}

void BinarySearch(){
  int size;
  printf("enter the size of arr: ");
  scanf("%d",&size);
  int arr[size];
  printf("enter elem in sortedArr: ");
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  int target;
  int position,flag =0;
  printf("\nenter elem to target: ");
  scanf("%d",&target);
  int start = 0;
  int last = size-1;
  while (start<=last){
    int mid = (int)(start+last)/2;
    if(target == arr[mid]){
      flag =1;
      position = mid;
      break;
    }
    else if(target<arr[mid]){
      last = mid -1;
    }
    else {
      start = mid+1;
    }
  }
  
  if(flag ==1){
    printf("first occurence of elem found at position: %d",position);
  }
  else printf("elem not found");
  return ;
} 

int rev_series(int num){
  printf("%d ",num);
  if(num==1) return 1;
  return rev_series(num-1);
}

int series(int init,int end){
  if(init == end){
    printf("%d ",init);
    return 1;
  }
  else if (init <=0 || end<=0) return -1;
  else printf("%d ",init);
  return series(init+1,end);
}

int sparseMatrix(){
  int arr[3][3];
  printf("Enter the elem: ");
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        scanf("%d", &arr[i][j]);
      }
    }
  int arr2[3][3];
  int k = 0;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        if (arr[i][j] != 0){
          arr2[k][0] = i;
          arr2[k][1] = j;
          arr2[k][2] = arr[i][j];
          k++;
        }
    }
  }
  
  printf("sparse matrix :\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
  return 0;
}

int bs(int arr[],int size,int key){
  int beg=0,end = size-1,mid;
  while(beg <=end){
    mid = (beg+end)/2;
    if(arr[mid] == key){
      return mid+1;
    }
    else if(key<arr[mid]){
      end = mid -1;
    }
    else beg = mid+1;
  }
  return -1;
  /*
  int size,key,pos;
  printf("Enter the size of array: ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the elem of array: ");
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the element to search: ");
  scanf("%d",&key);
  pos=bs(arr,size,key);
  if(pos ==-1) printf("Elem not found");
  else printf("Element found at position %d",pos);
  return 0;

  */
}


/*
#include<stdio.h>
#include<stdlib.h>
// cs-ds lab 2


struct node{
    int data ;
    struct node *next;
};

int main(){
    
    struct node *head,*second,*third;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    if(head == NULL || second == NULL || third == NULL){
        printf("mem not allocated");
    }
    else {
        head->data = 10;
        head->next = second;
        
        second->data = 20;
        second->next = third;
        
        third->data = 30;
        third->next = NULL; 
    }

    printf("%d -> %d -> %d -> NULL \n",head->data,second->data,third->data);

    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    // at start
    if(newnode != NULL){
        newnode->next = head;
        newnode->data = 5;
    }
    struct node *temp;
    temp = newnode;
    while (temp != NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf(" Null ");
    
    // at spec pos
    int pos;
    printf("Enter pos: ");
    scanf("%d",&pos);
    struct node *newnode2;
    newnode2 = (struct node*)malloc(sizeof(struct node));
    temp = head;
    for (int i=1;i<pos-1 && temp->next !=NULL;i++){
        newnode2->next = temp->next;
        newnode2->data = 100;
        temp->next = newnode2;
    }

    // insert at end
    struct node *temp;
    struct node *nn2;
    nn2 = (struct node*)malloc(sizeof(struct node));
    
    temp = head;
    while (temp->next->next != NULL){
        temp = temp->next;
    }

    temp->next = nn2;
    nn2->data= 40;
    nn2->next = NULL;
    
    // del at start
    temp = head;
    head = head->next;
    free(temp);

    // del at spc pos
    int pos;
    printf("Enter pos: ");
    scanf("%d",&pos);
    temp = head;
    for(int i=1;i<pos -1;i++){
        // code logic
    }

    // del at end
    temp = head;
    while (temp->next == NULL){
        temp = temp->next;
    }
    free(temp);

    return 0;
}
*/


int main(){
  char temp[10]="Hello";
  printf("%s",temp);
}