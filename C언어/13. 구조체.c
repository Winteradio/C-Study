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
 
 void set_human(struct TEST a, int age, int gender) // a가 초기화가 되지 않고 매개변수로 넘어갔기에, 초기화를 시켜줘야 한다. 
 {
 	// 특정한 변수의 값을 다른 함술르 통해 바꾸려면, 변수의 주소값을 전달해야한다.
	 // 그 주소값으로 접근하여야 변수를 바꿀 수 있기 때문,
	 // 주소로 접근하지않고, 변수를 함수에 넘겨줄경우, 변화 없이 지역변수 형식으로 남고 지워지게 된다.
	 // 그래서 TEST의 원형을 넘게 주게 될 시, 초기화가 진행되지 않은 a 이기에,
	 // age와 gender의 주소값이 존재하지 않기에 오류가 발생되게 된다. 
 	a.age = age;
 	a.gender= gender;
 }
