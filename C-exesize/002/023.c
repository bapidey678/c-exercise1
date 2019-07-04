#include<stdio.h>
void main(void) {
	int number, result;
	printf("Enter a number\n");
	scanf("%d",&number);
	result = number % 3;
	printf("Your number is %d\n",result);
}

