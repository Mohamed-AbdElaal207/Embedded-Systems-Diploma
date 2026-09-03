/*
 ============================================================================
 Name        : lab_6.c
 Author      : mohamed abdelaal
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,sum=0;
	printf("Enter an integer:");
	fflush(stdout);
	scanf("%f",&a);
	for(int i=1;i<=a;i++)
		sum+=i;
	printf("Sum = %f",sum);
	return EXIT_SUCCESS;
}
