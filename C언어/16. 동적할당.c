#include <stdio.h>

int main()
{
	int SizeofArray;
	int *Arr;
	
	SizeofArray = 2;
	Arr = (int*)malloc( sizeof(int) * SizeofArray );
	// malloc : memory allocation
	// return�� (void*) �� 
	free(Arr);
	// Arr �����ͷ� �� �ּҰ����� ���ϰ� �ִ� �޸𸮸� ����
	// ���� �� ���������� �޸𸮸� �Ҵ� 
	// memcpy( Pointer is copied by other Pointer, Other Pointer copy his data for pointer, memory size for coping )
	// memmove( Pointer is moved by other Pointer, Other Pointer move his data for pointer, memory size for moving )
	// memcmp( No1 Pointer, No2 Pointer, the number for compare each pointer )
	return 0;
}
