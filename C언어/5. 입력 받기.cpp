#include <stdio.h>

int main()
{
	// 문자입력받기
	char ch;
	short sh;
	int in;
	long lo;
	float fl;
	double dou;
	
	printf("char형 변수 입력");
	scanf("%c",&ch);
	
	printf("short형 변수 입력");
	scanf("%hd", &sh);
	
	// scanf( " ~~ \n " ) 할시 안 끝남 
	
	printf("int형 변수 입력");
	scanf("%d", &in);
	
	printf("long형 변수 입력");
	scanf("%ld", &lo);
	
	printf("float형 변수 입력");
	scanf("%f", &fl);
	
	printf("double형 변수 입력");
	scanf("%lf", &dou);;
	
	printf("char %c, short %hd, int %d \n", ch, sh, in, lo );
	printf("long %ld, float %f, double %lf \n", lo, fl, dou ); 
	return 0;
}

