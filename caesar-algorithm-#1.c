#include "pch.h"
#include <iostream>

int main()
//Caesar Aiboubinne #1
{
	char text[100], ch;
	int i, banali;

	printf("Mutqagreq texty: ");
	gets_s(text);

	printf("Banali: ");scanf_s("%d", &banali);

	for (i = 0; text[i] != '\0'; ++i) {
		ch = text[i];
		if (ch >= 'a' && ch <= 'z') {
			ch = ch + banali;
			if (ch > 'z') {
				ch = ch - 'z' + 'a' - 1;
			}
			text[i] = ch;
		}
		else if (ch >= 'A' && ch <= 'Z') {
			ch = ch + banali;
			if (ch > 'Z') {
				ch = ch - 'Z' + 'A' - 1;
			}
			text[i] = ch;
		}
		else if (ch = ' ') ch = 'o';
		text[i] = ch;
	}

	printf("Kodavorvatz text: %s", text);

	return 0;
}