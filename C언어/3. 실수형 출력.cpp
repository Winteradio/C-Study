#include <stdio.h>

int main()
{
	float A = 3.14592f;
	double B = 111222231.14529;
	int C = 12345;
	
	printf("%d \n", C ); // 10진수로 int 변수 출력 
	printf("%o \n", C ); // 8진수로 int 변수 출력 
	printf("%x \n", C ); // 16진수로 int 변수 출력 
	
	printf("%x \n", A ); // 16진수로 float 변수 출력 X 
	
	printf("%f \n", A ); // float 출력 
	printf("%f \n", B ); // double 출력 
	 
	printf("%.2f \n", A ); // 소숫점자리 2번째자리까지 출력 
	
	// 이들은, 5.1f의 경우, 윗자리수가 5개 이상일 시, 전부  추력
	// 5개 미만일 시, 그만큼 공백이 생기고 5자리가 채워지는 형식 
	printf("%5.1f \n", B ); // 총 자릿수 5개, 소숫점 자리 1개까지 출력 
	printf("%2d \n", C ); // 총 자릿수 2개까지 출력 
	
	return 0;
}
