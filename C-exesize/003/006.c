#include<stdio.h>
void main(void) {
	int i=1, j=9;
	if(i>=5 && j<5)
		i=j+2;
	printf("%d\n",i);
}
