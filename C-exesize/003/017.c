#include<stdio.h>
void main(void) {
	int x=2,y=20;
	switch(x)
	{
		y=30;
		case 1:
			y++;
			break;
		case 2:
			y--;
			break;
		default:
			y+=2;
	}
	printf("y is %d\n",y);
}
