#include <stdio.h>

int main()
{
	// NULL : 종료 문자열
	// 0 -> '\0' : NULL 종료 문자
	char Null_1 = '\0';
	char Null_2 = 0;
	char Null_3 = (char)NULL;
	
	char not_Null = '0';
	
	char st_1[4] = {'p','s','i','\0'};
	char st_2[4] = {'p','s','i',0};
	char st_3[4] = {'p','s','i',(char)NULL};
	char st_4[4] = {"psi"};
	
	printf("%s \n", st_1);
	printf("%s \n", st_2);
	printf("%s \n", st_3);
	printf("%s \n", st_4); 
	
	// "" ( 큰따움표 ) : 문자열 ( 한개 이상의 문자 )를 지정할 때 사용
	// '' ( 작은따움표 ) : 한개의 문자를 지정할 때 사용 
	
	char *AAA = "Hello!";
	char  BBB[7] = {"Hello!"};
	// AAA와 BBB의 가장 큰 차이점
	// AAA - 수정 불가 ( 직접 접근 불가 ) / BBB - 수정 가능 ( 직접 접근 가능 )
	// AAA -> Data 영역에 저장 -> ROM (Read only Memory) 이기에 수정 불가
	// BBB -> Stack 영역에 저장 -> 수정 가능 
	
	// 메모리의 구조
	/*
		1. 코드 영역 : 실행할 프로그램의 코드 저장 
		2. 데이터 영역 : 프로그램의 전역변수와 정적 변수 저장 
		3. 힙 영역 : 동적 할당되어지는 메모리 관리 
		4. 스택 영역 : 함수의 호출 및 매개변수와 지역 변수 관리 
	*/ 
	
	char CCC[7] = {"Hello!"};
	if ( BBB == CCC )
	{
		printf("Same! \n");
	 } 
	 else
	 {
	 	printf("Diff! \n");
	 	// Diff인 이유, BBB와 CCC는 각각의 문자열의 첫 주솟값을 가르키기 때문 
	 }
	 
	// scanf : ' ', '\n', '\t'을 제외한 나머지들을 입력받음 
	return 0;
 } 
