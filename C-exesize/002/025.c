#include<stdio.h>
void main(void) {
	int sone, stwo, sthree, sfour, sfive, ssix, sseven, seven, sum, avarage;
	printf("Enter subject numbers with space each, like 10 20 30\n");
	scanf("%d %d %d %d %d %d %d", &sone, &stwo, &sthree, &sfour, &sfive, &ssix, &sseven);
	sum = sone + stwo + sthree + sfour + sfive + ssix + sseven;
	avarage = sum / 7;
	printf("The avarage number is %d\n", avarage);
}
