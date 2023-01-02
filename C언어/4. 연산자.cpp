#include <stdio.h>

int main()
{
	int a, b;
	// 대입 연산자
	a = 10;
	b = 3;
	
	// 산술 연산자
	printf("%d \n", a+b);
	printf("%d \n", a-b); 
	printf("%d \n", a * b);
	printf("%d \n", a / b);
	printf("%d \n", a % b);
	
	// unsinged int
	printf("%u \n", -a);
	return 0;
 } 
