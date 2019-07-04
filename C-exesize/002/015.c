#include<stdio.h>
void main(void) {
	int a=10, b=3, max;
	a > b ? max = a : (max = b);
	printf("a=%d b=%d\n",a,b);
}
