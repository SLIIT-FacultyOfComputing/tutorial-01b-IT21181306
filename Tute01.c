/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
	float avg;
	
	printf("Input mark 1 : ");
	scanf("%d", &mark1);// read marks
	
	printf("Input mark 2 : ");
	scanf("%d", &mark2);// read marks
	
	avg = (mark1 + mark2)/2.0;//find average
	
	printf("Average mark : %.2f", avg);//Display average
	
  return 0;
}

