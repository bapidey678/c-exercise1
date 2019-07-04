#include<stdio.h>
void main(void) {
	int a=10;
	a=a++;
	a = a++ * a--;
	printf("a=%d\n",a);
	printf("a=%d\n",a++ * a--);
}
