#include<stdio.h>
void main(void) {
	int k=10;
	switch (k) {
		case 5:
		case 10:
			k++;
// we can't use 	continue;
		case 15:
		case 20:
			k--;
	}
}
