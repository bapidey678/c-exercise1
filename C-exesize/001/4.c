#include<stdio.h>
#include<limits.h>
int main(void) {
	int a = 1000000;
	unsigned int b = 100000;
	printf("I write Intger one as %d\t\b I write Intger two as %d\n", a,b);
	printf("Defined Integer max number %d\t\b Undifined Integer max number %d\n", INT_MAX, UINT_MAX);
}
