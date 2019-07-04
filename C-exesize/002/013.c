#include<stdio.h>
void main(void) {
	int a,b,c,d;
	a=b=c=d=4;
	a*=b+1;
	c+=d*=3;
	printf("a=%d, b=%d, c=%d\n",a,b,c);
}
