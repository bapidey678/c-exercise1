#include<stdio.h>
void main(void) {
	int x=30,y=5,z;
	if(x==10) {
		z++;
	} else if (x==20) {
		z--;
	} else if (x==30) {
		if(y==2) {
			z+=3;
		} else if (y==4 || y==5) {
			z+=10;
		} else {
			z+=2;
		}
	} else {
		z=2;
	}
}
