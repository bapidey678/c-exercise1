#include<stdio.h>
void main(void) {
	int redius;
	float perimetar, area;
	printf("Enter the circle redius\n");
	scanf("%d",&redius);
	area = 22/7 * redius * redius;
	perimetar = 2 * 22/7 * redius;
	printf("Area = %f, Perimetar = %f\n", area, perimetar);
}
