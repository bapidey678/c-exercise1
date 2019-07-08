#include<stdio.h>
#include<math.h>
void main(void) {
	int i,n=10;
	for( i=2; i<= (n*n); i++ )
		if ( n%i == 0 )
			break;
	printf("%d\t%d\n",i,n);
}
