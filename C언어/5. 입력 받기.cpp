#include <stdio.h>

int main()
{
	// �����Է¹ޱ�
	char ch;
	short sh;
	int in;
	long lo;
	float fl;
	double dou;
	
	printf("char�� ���� �Է�");
	scanf("%c",&ch);
	
	printf("short�� ���� �Է�");
	scanf("%hd", &sh);
	
	// scanf( " ~~ \n " ) �ҽ� �� ���� 
	
	printf("int�� ���� �Է�");
	scanf("%d", &in);
	
	printf("long�� ���� �Է�");
	scanf("%ld", &lo);
	
	printf("float�� ���� �Է�");
	scanf("%f", &fl);
	
	printf("double�� ���� �Է�");
	scanf("%lf", &dou);;
	
	printf("char %c, short %hd, int %d \n", ch, sh, in, lo );
	printf("long %ld, float %f, double %lf \n", lo, fl, dou ); 
	return 0;
}

