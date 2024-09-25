#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	char c;
	puts("Введите символ:");
	scanf("%c", &c);
	printf("Введённый символ в десятеричной СС: %i\n Введённый символ в шестрандцатиричной СС: %x", c, c);
}