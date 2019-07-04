#include<stdio.h>
int main(void) {
	int a=-3,b,c,d;
	c = a<b;
	d = (a>b) && (c<b);
	printf("c=%d, d=%d\n",c,d);
	return 0;
}
