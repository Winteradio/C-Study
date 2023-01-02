#include <stdio.h>

void function(); // 함수의 원형 

int main()
{
	function();
	void (*nothing)();
	nothing = function; // function은 function함수의 시작주솟값을 가르킨다.
	// nothing이라고 하는 void를 리턴하는 함수의 포인터는
	// function과 동일한 형식이므로, 같은 주솟값을 지닐 수 있다. 
	
	nothing();
	return 0;
 } 
 
 void function()
 {
 	printf(" Hello World! \n");
 	return;
 }
