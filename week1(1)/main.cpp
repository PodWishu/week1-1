#include <stdio.h>

int main()
{
	float a, b;
	printf("a =");
	scanf_s("%f", &a);
	printf("b =");
	scanf_s("%f", &b);
	printf("a+b = %f\n", a + b);
	printf("a-b = %f\n", a - b);
	printf("a*b = %f\n", a * b);
	printf("a/b = %f\n", a / b);
	return 0;
}