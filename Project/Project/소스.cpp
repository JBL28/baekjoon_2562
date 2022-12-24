#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[15];
	for (int i = 1; i <= 9; i++)
		scanf("%d", &a[i]);

	int min=0;
	int index;
	for (int i = 1; i <= 9; i++)
		if (a[i] > min) {
			min = a[i];
			index = i;
		}
	printf("%d\n%d", min, index);

	return 0;
}