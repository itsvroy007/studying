#include <stdio.h>
#include <math.h>

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
  scanf("%d", &terms);
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

/*
                  COMPUTATIONAL METHODS!!

// 1+ (2 sin sqrt x) -x   init guess 0 4
#include <stdio.h>
#include <math.h>

float f(float x){
    return 1 + 2 * sin(sqrt(x)) - x;
}

int main(){
    float a=0, b=4, c;
    printf("Enter guesses a and b");
    scanf("%2f" "%2f" , &a, &b);
    if (a < 0 || b < 0){
        printf("ERROR: guess cannot be negative.\n");
        return 1;
    }

    if (f(a) * f(b) >= 0) {
        printf("ERROR: Bisection method cannot be applied.\n");
        printf("f(a) = %f\n", f(a));
        printf("f(b) = %f\n", f(b));
        return 1;
    }

    printf("\nBisection Method\n");

    for (int i = 1; i <= 10; i++){
        c = (a + b) / 2;

        printf("Iteration %d: ", i);
        printf("a = %f, b = %f, c = %f, f(c) = %f\n",
              a, b, c, f(c));
        if (fabs(f(c)) < 0.000001)break;
        if (f(a) * f(c) < 0)  b = c;
        else a = c;
    }

    printf("\nRoot = %f\n", c);

    return 0;
}
*/

/*
            newton raphson method

formula -> x(i+1) = x(i) - f(x(i)) / f'(x(i))
y = f(x)
f( x) and f'(x)
initial guess -> x

let fx is x ^3 - 2x -5 =0

function -> (x*x*x)-2*(x) - 5 = 0;
df -> 3*(x*x) - 2

initial guess -> num
*/

double function(double x){
  return (x * x * x) - 2 * (x)-5; // x cube - 2x -5
}

double df(double x){
  return 3 * (x * x) - 2;
}

void NewtonRaphsonMethod(){
  double x0, x1;
  int i, maxIterations;

  printf("Enter initial guess: ");
  scanf("%lf", &x0);

  printf("Enter maximum number of iterations: ");
  scanf("%d", &maxIterations);

  for (i = 1; i <= maxIterations; i++){
    if (df(x0) == 0){
      printf("Derivative is zero. Method cannot continue.\n");
      return 1;
    }

    x1 = x0 - function(x0) / df(x0);

    printf("Iteration %d: x = %.6lf\n", i, x1);

    // Check convergence
    if (fabs(x1 - x0) < 0.000001){
      printf("\nRoot = %.6lf\n", x1);
      return 0;
    }

    x0 = x1;
  }

  printf("\nApproximate root = %.6lf\n", x1);
  return;
}

int main(){
  fibonacci(10, 0, 1);
  goldenRatio();
  return 0;
}