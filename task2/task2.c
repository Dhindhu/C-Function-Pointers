#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exit_program(int a, int b);

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  printf("What would you want done? (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
  int (*calculator[5])() = {add, subtract, multiply, divide, exit_program};
  int solution;
  int result;
  
  scanf("%d", &solution);
  result = (*calculator[solution])(26, 41);
  printf("x = %d\n", result);

	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }

int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }

int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }

int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }

int exit_program(int a, int b) {printf ("Program exiting\n"); exit(0);} 
