#include <stdio.h>
// # pragma : �����Ϸ����� ���ϴ� ��ó���� ��� : �����Ϸ��� ���� ����� �޶�����. ex ) Linux�� MFC���� �ٸ� 

// typedef ������Ÿ���̸� ���κο���Ÿ���̸� 
typedef int INT; 

// volatile : ����ؼ� ���� �� �ִ� �����̱⿡, ����ȭ���� �ʵ��� ������ 
int main()
{
	INT a = 1;
	printf("%d \n", a);
	
	volatile INT b;
	return 0;
 } 
