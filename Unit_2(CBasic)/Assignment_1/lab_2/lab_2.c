/*
 * main.c
 *
 *  Created on: ٢٥‏/٠٨‏/٢٠٢٦
 *      Author: mohamed abdelaal
 */

#include <stdio.h>
int main()
{

	char c;
	printf("Enter an alphabet:");
	fflush(stdout);
	scanf("%c",&c);
	switch(c)
	{
	case 'a':
	case 'A':
	case 'i':
	case 'I':
	case 'e':
	case 'E':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf("%c is vowel",c);
		break;
	default:
		printf("%c is consonant",c);
		break;
	}
 return 0;
}
