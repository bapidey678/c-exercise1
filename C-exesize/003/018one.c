#include<stdio.h>
void main(void) {
	int x=5,y;
	switch(x) {
		case 1:
			y=x+1;
			break;
		case 2:
			y=0;
			x=0;
		case 3:
		case 4:
		case 5:
			y++;
			break;
		case 6:
			y+=4;
		default:
			y--;
	}
	printf("x is %d\nand y is %d\n",x,y);
}
