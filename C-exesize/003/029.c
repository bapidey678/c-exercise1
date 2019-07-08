#include<stdio.h>
void main(void) {
	int i,sum;
	for( i=0; i<10; i+=3 ) {
		sum+=i*i;
		printf("%d\n",sum);
	}
}
