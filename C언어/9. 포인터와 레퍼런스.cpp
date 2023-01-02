#include <stdio.h>

int main()
{
	int a = 10;
	int* b = &a; // &(변수) -> 변수의 주솟값 
	
	printf("%d \n", a);
	printf("%p \n", b);
	// %p Pointer 형식을 출력
	
	printf("%d \n", *b); // b의 주솟값으로 들어간 실체값
	
	const int* A = &a;
	printf("%d \n", *A);  // A가 가르키는 a라는 주솟값이 바뀌면 안된다.
	a = 11;
	printf("%d \n", *A); // A가 가르키는 a라는 주솟값은 바뀌지 않고, 그것의 값만 바뀌었다. 
	return 0;
 } 
