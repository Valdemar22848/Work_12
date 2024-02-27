#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()

{
	int x;
	float y;

	printf("Enter x: ");
	scanf("%d", &x);

	y = sqrt(pow(2, x));

	printf("Results: %2.f", y);

	return 0;
}