#include<stdio.h>
void main(void) {
	int i,j=30,k=6;
	for( i=0; i==j || k>0; i++,j--,k-=2 ) {
		printf("%d %d %d\n",i,j,k);
	}
}
