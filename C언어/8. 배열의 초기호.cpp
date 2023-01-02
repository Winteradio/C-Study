#include <stdio.h>

int main()
{
	int arr[3] = { 1 };
	// 내부적으론, int arr[3] = { 1, 0, 0}; 형식으로 생기기에 초기화가 안되어 보이지만, 초기화됨
	// 그래서, 초기화 관련 에러가 뜨지 않음 
	return 0;
}
