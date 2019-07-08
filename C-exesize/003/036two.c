#include<stdio.h>
void main(void) {
	int i=1,j=3;
	while(i<5 && j!=0) {
		i++;
		j--;
	}
	printf("%d %d\n",i,j);
}
