#include <stdio.h>

int main()
{
	int a = 10;
	int* b = &a; // &(����) -> ������ �ּڰ� 
	
	printf("%d \n", a);
	printf("%p \n", b);
	// %p Pointer ������ ���
	
	printf("%d \n", *b); // b�� �ּڰ����� �� ��ü��
	
	const int* A = &a;
	printf("%d \n", *A);  // A�� ����Ű�� a��� �ּڰ��� �ٲ�� �ȵȴ�.
	a = 11;
	printf("%d \n", *A); // A�� ����Ű�� a��� �ּڰ��� �ٲ��� �ʰ�, �װ��� ���� �ٲ����. 
	return 0;
 } 
