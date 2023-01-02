/* 
	
## 숫자 표현 
	컴퓨터의 2진법
		모든 수를 2로 나눈 나머지들로 구성된 숫자들
		
		하지만, 이러한 방식은 숫자들이 너무 길이지기에, 16진법을 사용함
	
	컴퓨터의 16진법
		사람이 편리하게 사용하기 위해서 사용
		하지만, 사람이 사용할 수 있는 숫자는 10개가 최대
		
		0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 -> 사람 
		0 1 2 3 4 5 6 7 8 9 A  B  C  D  E  F  -> 컴퓨터에게
		
## 메모리 단위

	1 Bit 
		0 과 1 로 구성
		
	1 Byte
		8 Bit = 1 Byte
		
## 변수 종류

	# 정수형 
		char / 1 Byte / -128 ~ 127
		unsigned char / 1 Byte / 0 ~ 255
		short (int) / 2 Byte / -32768 ~ 32767
		unsigned short / 2 Byte / 0 ~ 65535
		int / 4 Byte / -2147483648 ~ 2147483647
		unsigned int / 4 Byte / 0 ~ 4294967295
		long (int) / 4 Byte / -2147483648 ~ 2147483647
		long long / 8 Byte / -2^63 ~ 2^63-1 
	
	# 실수형 
		float / 4 Byte / -3.4*10^38 ~ 3.4*10^38
		double / 8 Byte / -1.79*10^308 ~ 1.79*10^308
		long double / 8 Byte 이상 / double보다 같거나 큰 범위 
		
## 변수의 출력

	printf("%d \n", A ); : int A라는 변수를 10진수로 출력
	printf("%o \n", A ); : int A라는 변수를 8진수로 출력
	printf('%x \n", A ); : int A라는 변수를 16진수로 출력 
	
*/ 
