#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	char c;
	puts("������� ������:");
	scanf("%c", &c);
	printf("�������� ������ � ������������ ��: %i\n �������� ������ � ������������������ ��: %x", c, c);
}