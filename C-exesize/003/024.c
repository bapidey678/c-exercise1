#include<stdio.h>
void main(void) {
	int i;
	for (i=1; i<5; i++ ) {
		printf("%d\t",i);
	}
	i=10;
	while(i<5) {
		printf("%d\t",i++);
	}
	i=0;
	while(i<5) {
		printf("%d\t",i++);
	}
}
