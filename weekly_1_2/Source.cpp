#include<stdio.h>
int main()
{
	float x, y;
	printf("Enter number = ");
	scanf_s("%f", &x);
	printf("Enter number = ");
	scanf_s("%f", &y);
	if (x > y)
	{
		printf("%.2f is much more than %.2f", x, y);
	}
	else if (x < y)
	{
		printf("%.2f is much more than %.2f", y, x);
	}
	else if (x = y)
	{
		printf("%.2f is equal to %.2f", x, y);
	}
}