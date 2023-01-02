#include <stdio.h>

int main()
{
	int SizeofArray;
	int *Arr;
	
	SizeofArray = 2;
	Arr = (int*)malloc( sizeof(int) * SizeofArray );
	// malloc : memory allocation
	// return은 (void*) 형 
	free(Arr);
	// Arr 포인터로 간 주소값에서 지니고 있는 메모리를 해제
	// 오직 힙 영역에서만 메모리를 할당 
	// memcpy( Pointer is copied by other Pointer, Other Pointer copy his data for pointer, memory size for coping )
	// memmove( Pointer is moved by other Pointer, Other Pointer move his data for pointer, memory size for moving )
	// memcmp( No1 Pointer, No2 Pointer, the number for compare each pointer )
	return 0;
}
