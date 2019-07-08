#include<stdio.h>
void main(void) {
	int i;
	for ( i=1; ; i++ ) {
		if (i>5)
			break;
		printf("%d ",i);
		printf("\n");
	}
}
