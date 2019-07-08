#include<stdio.h>
void main(void) {
	int emp_id;
	while( emp_id < 100 || emp_id > 500 ) {
		printf("Enter employee ID (100 - 500) : ");
		scanf("%d",&emp_id);
	}
}
