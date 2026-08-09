#include<stdio.h>

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

struct nodes
{
  int data;
  struct node *next;
  
  
};


int main(){
  series(1,5);
  return 0;
}