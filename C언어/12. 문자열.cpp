#include <stdio.h>

int main()
{
	// NULL : ���� ���ڿ�
	// 0 -> '\0' : NULL ���� ����
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
	
	// "" ( ū����ǥ ) : ���ڿ� ( �Ѱ� �̻��� ���� )�� ������ �� ���
	// '' ( ��������ǥ ) : �Ѱ��� ���ڸ� ������ �� ��� 
	
	char *AAA = "Hello!";
	char  BBB[7] = {"Hello!"};
	// AAA�� BBB�� ���� ū ������
	// AAA - ���� �Ұ� ( ���� ���� �Ұ� ) / BBB - ���� ���� ( ���� ���� ���� )
	// AAA -> Data ������ ���� -> ROM (Read only Memory) �̱⿡ ���� �Ұ�
	// BBB -> Stack ������ ���� -> ���� ���� 
	
	// �޸��� ����
	/*
		1. �ڵ� ���� : ������ ���α׷��� �ڵ� ���� 
		2. ������ ���� : ���α׷��� ���������� ���� ���� ���� 
		3. �� ���� : ���� �Ҵ�Ǿ����� �޸� ���� 
		4. ���� ���� : �Լ��� ȣ�� �� �Ű������� ���� ���� ���� 
	*/ 
	
	char CCC[7] = {"Hello!"};
	if ( BBB == CCC )
	{
		printf("Same! \n");
	 } 
	 else
	 {
	 	printf("Diff! \n");
	 	// Diff�� ����, BBB�� CCC�� ������ ���ڿ��� ù �ּڰ��� ����Ű�� ���� 
	 }
	 
	// scanf : ' ', '\n', '\t'�� ������ ���������� �Է¹��� 
	return 0;
 } 
