/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1, mark2; // declare variables
  float average;

  printf("Enter Mark 1 : "); // prompt
  scanf("%f", &mark1); // read mark 1

  printf("Enter Mark 2 : ");  // prompt
  scanf("%f", &mark2);  // read mark 2

  average = (mark1 + mark2) / 2;  // calculate average of 2 marks

  puts("");
  printf("Average : %.2f", average);  // display average mark

  return 0;
} // end function main

