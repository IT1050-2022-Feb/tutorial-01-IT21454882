/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

// function declaration
int minimum(int num1, int num2);
int maximum(int num1, int num2);
int multiply(int num1, int num2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}



// start function minimum
int minimum(int num1, int num2)
{
  int min;

  if(num1 < num2)
  {
    min = num1;
  }
  else(num2 < num1)
  {
    min = num2;
  }

  return min;
} // end of function minimum 

// start function maximum 
int maximum(int num1, int num2)
{
  int max;

  if(num1 > num2)
  {
    max = num1;
  }
  else(num2 > num1)
  {
    max = num2;
  }

  return max;
} // end of function maximum


// start of function multiply
int multiply(int num1, int num2)
{
  int multiply_Value;

  multiply_Value = num1 * num2;

  return multiply_Value;
} // end of function multiply
