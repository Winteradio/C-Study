#include <stdio.h>

void function(); // �Լ��� ���� 

int main()
{
	function();
	void (*nothing)();
	nothing = function; // function�� function�Լ��� �����ּڰ��� ����Ų��.
	// nothing�̶�� �ϴ� void�� �����ϴ� �Լ��� �����ʹ�
	// function�� ������ �����̹Ƿ�, ���� �ּڰ��� ���� �� �ִ�. 
	
	nothing();
	return 0;
 } 
 
 void function()
 {
 	printf(" Hello World! \n");
 	return;
 }
