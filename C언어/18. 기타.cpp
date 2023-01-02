#include <stdio.h>
// # pragma : 컴파일러에게 말하는 전처리기 명령 : 컴파일러에 따라 명령이 달라진다. ex ) Linux와 MFC에서 다름 

// typedef 기존의타입이름 새로부여할타입이름 
typedef int INT; 

// volatile : 계속해서 변할 수 있는 변수이기에, 최적화하지 않도록 설정함 
int main()
{
	INT a = 1;
	printf("%d \n", a);
	
	volatile INT b;
	return 0;
 } 
