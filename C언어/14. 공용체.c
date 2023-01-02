#include <stdio.h>

union Persion
{
	int i;
	char j;
};
/*
	공용체 ( union ) 은 공용체 내의 변수에 대하여 메모리를 공유한다.
	구조체 ( struct ) 는 구조체 내의 변수들이 각각의 고유한 메모리를 할당받는다.
	즉, 공용체는 다른 변수를 변경함으로써 또다른 변수의 값을 바꿀 수 있다는 뜻이다. 
*/

enum color
{
	Red = 1,
	Blue = 2,
	Green = 3,
};

int main()
{
	union Persion Lee;
	Lee.i = 0x12345678;
	printf("%x \n", Lee.j);
	// i를 j형식응로, j를 i형식으로 사용할 수 있게 여러가지 관점을 지닌 것으로 볼 수 있다.
	// j의 경우에는 78이 출력이 된다. 
	
/*
	빅 엔디안 ( Big Endian ) : 낮은 주소값에 상위 비트를 적는 방식 
		12 / 34 / 56 / 78
		j -> 0x12 : char 일경우 
	
	리틀 엔디안 ( Little Endian ) : 높은 주소값에 상위 비트를 적는 방식
		78 / 56 / 34 / 12
		j -> 0x78 : char 일 경우
		j -> 0x5678 : short 일 경우
			왜 0x7856이 아닐까?
			컴퓨터 자신이 리틀 엔디안이라는 것을 인지하고 있기에, 
			출력시에는 다시 반대로 하여서 출력을 진행하게 된다.
			그럼 당연히 i를 출력할 때에도 0x78563412가 아닌,
			0x12345678로 출력되게 된다. 
*/
	int Palette = Red;
	printf("%d \n", Palette );
	return 0;
 } 
