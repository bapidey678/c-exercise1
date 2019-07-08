#include<stdio.h>
void main(void) {
	int n,sum=0;
	for( ; ; ) {
		if(sum>100)
			break;
		scanf("%d",&n);
		sum+=n;
	}
}
