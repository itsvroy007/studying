#include <stdio.h>

// thrgh loops
int fibo(int terms){
  int a = 0;
  int b = 1;
  printf("%d ", a);
  printf("%d ", b);
  for (int i = 2; i < terms; i++){
    int nextTerm = a + b;
    printf("%d ", nextTerm);
    a = b;
    b = nextTerm;
  }
  return 0;
}

void fibonacci(int num, int a, int b){ // a and b are 1st and 2nd term
  if (num > 0){
    printf("%d ", a);
    fibonacci(num - 1, b, a + b);
  }
  return; // fibonacci(num,0,1); while calling
}

// now for golden ratio we need to have b/a upto 4 decimal
int goldenRatio(){
  int terms;
  printf("\nenter num of terms: ");
  scanf("%d",&terms);
  int a = 0;
  int b = 1;
  for (int i = 1; i < terms; i++){
    int nextTerm = a + b;
    printf("%.4f \t", (float)nextTerm / b);
    a = b;
    b = nextTerm;
  }
  return 0;
}

int main(){
  fibonacci(10, 0, 1);
  goldenRatio();
  return 0;
}