/*
 * main.c
 *
 *  Created on: ٢٥‏/٠٨‏/٢٠٢٦
 *      Author: mohamed abdelaal
 */

#include<stdio.h>
int main()
{
	float a;
	printf("Enter a number: ");
	fflush(stdout);
    scanf("%f",&a);
    fflush(stdout);
    if(a>0)
    	printf("%f is positive.",a);
	else if (a<0)
		printf("%f is negative.",a);
	else
		printf("You entered zero.");

	return 0;
}
