#include <stdio.h>

/*
	#define 함수이름(인자) 치환 or 공식 
*/
#define square1(x) x*x
#define square2(x) (x)*(x)

__inline int square(int x) { return x*x*x; }

int main()
{
	printf("%d \n", square1(3+1)); // 3 + 1 * 3 + 1 : 3+ 3+ 1
	printf("%d \n", square2(3+1)); // ( 3+ 1 ) * ( 3 + 1 )
	// 매크로 함수는 말그대로 전부 다 치환만 시켜버린다. 
	// 이러한 매크로 함수의 단순 치환을 해결하기 위해 만들어진 함수유형
	// 인라인 (inline) 함수
	printf("%d \n", square(3));
	// 위의 함수는
	printf("%d \n", 3*3*3);
	// 와 동일하다. 인라인함수는 함수를 호출하는 것이 아니라, 함수처럼 모양을 한 매크로인 것이다.
	// 하지만, 매크로 함수의 단점을 보완함 형식이다. 
	 
	return 0;
}
