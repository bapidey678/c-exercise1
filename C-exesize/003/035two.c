#include<stdio.h>
void main(void) {
	int i=1, j=3;
	while(i<3) {
		if(j==0)
			break;
		printf("%d \n",i++, j--);
	}
}
