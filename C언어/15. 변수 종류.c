#include <stdio.h>

int g_Va = 10; // ���� ���� 

int* function()
{
	static int s_Va = 9;
	
	return &s_Va;
}

int main()
{
	int l_Va = 8; // ���� ���� 
	int s_Va = *function();
	
	printf("%d \n", g_Va );
	printf("%d \n", l_Va );
	printf("%d \n", s_Va );
	return 0;
}
