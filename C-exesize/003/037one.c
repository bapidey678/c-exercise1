#include<stdio.h>
void main(void) {
	int i=1;
	for( ; ; ) {
		if (i==5)
			break;
		printf("%d\n",i);
		i++;
	}
}
