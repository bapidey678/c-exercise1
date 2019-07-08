#include<stdio.h>
void main(void) {
	int k,j,i;
	for ( k=1; k<=3; k++ ) {
		for ( j=1; j<=5; j++ ) {
			for ( i=1; i<=6; i++ )
				printf("*");
			printf("\n");
		}
	}
}
