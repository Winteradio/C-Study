#include <stdio.h>

struct Person
{
	int age;
	int gender;
 } ;

void set_human(struct TEST a, int age, int gender);

int main()
{
	struct Person Lee;
	
	return 0;
 } 
 
 void set_human(struct TEST a, int age, int gender) // a�� �ʱ�ȭ�� ���� �ʰ� �Ű������� �Ѿ�⿡, �ʱ�ȭ�� ������� �Ѵ�. 
 {
 	// Ư���� ������ ���� �ٸ� �Լ��� ���� �ٲٷ���, ������ �ּҰ��� �����ؾ��Ѵ�.
	 // �� �ּҰ����� �����Ͽ��� ������ �ٲ� �� �ֱ� ����,
	 // �ּҷ� ���������ʰ�, ������ �Լ��� �Ѱ��ٰ��, ��ȭ ���� �������� �������� ���� �������� �ȴ�.
	 // �׷��� TEST�� ������ �Ѱ� �ְ� �� ��, �ʱ�ȭ�� ������� ���� a �̱⿡,
	 // age�� gender�� �ּҰ��� �������� �ʱ⿡ ������ �߻��ǰ� �ȴ�. 
 	a.age = age;
 	a.gender= gender;
 }
