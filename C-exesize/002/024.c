#include<stdio.h>
void main(void) {
	int a, b, result, diff;
	printf("Enter two number\n");
	scanf("%d %d",&a,&b);
	if ( a > b ) {
		diff = a - b;
		printf("The diffrence is %d\n", diff);
	} else {
		result = a + b;
		printf("The sum is %d\n", result);
	}
}
