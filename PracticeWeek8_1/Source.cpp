#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	scanf("%s", a);
	int b = strlen(a);
	for (int i = 0; i < b; i++)
	{
		if (a[i] >= 65 && a[i] <= 90)
		{
			a[i] = a[i] + 32;
			printf("%c", a[i]);
		}
		else if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
			printf("%c", a[i]);
		}
	}
	return 0;
}