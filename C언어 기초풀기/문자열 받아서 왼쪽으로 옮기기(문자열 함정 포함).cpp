#include <stdio.h>


// 문자입력 받을때 스페이스나 엔터들어가게 되면 그것이 문자로 인식되어
// 다음번 문자 입력으로 대체되서 망가짐 그럴때 해결책은
// 1. scanf(" %c", &c) 앞에 띄워서 사용하든, 변수하나 선언해 getchar();로 먹어준다. 

int main(void) {
	
	unsigned int value;
	char c1, c2, c3, c4;
	
	printf("첫번째 문자를 입력하시요: ");
	scanf(" %c", &c1);
	printf("두번째 문자를 입력하시요: ");
	scanf(" %c", &c2);
	printf("세번째 문자를 입력하시요: ");
	scanf(" %c", &c3);
	printf("네번째 문자를 입력하시요: ");
	scanf(" %c", &c4);
	
	value = (c4<<24) | (c3<<16) | (c2<<8) | c1; //00000000 00000000 00000000 000000
	printf("결과값: %x \n", value); 
	 
	return 0;
}
