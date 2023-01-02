#include <stdio.h>

int main()
{
	// const int a; : 초기화 안 해줄 시 에러 발생
	const int a = 10;
	
	printf("%d \n", a);
	
	// a = 1; : const 상태인 변수를 바꾸려 할 때, 오류 발생 
	return 0; 
 } 
