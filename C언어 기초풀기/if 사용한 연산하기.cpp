#include <stdio.h>


// 문자입력 받을때 스페이스나 엔터들어가게 되면 그것이 문자로 인식되어
// 다음번 문자 입력으로 대체되서 망가짐 그럴때 해결책은
// 1. scanf(" %c", &c) 앞에 띄워서 사용하든, 변수하나 선언해 getchar();로 먹어준다. 

int main(void) {
	
	char op;
	int x, y, result;
	
	printf("수식을 입력하시요: \n");
	printf("(예: 2 + 5) \n");
	printf(">>");
	
	scanf("%d %c %d", &x, &op, &y);
	
	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else 
		printf("지원하지 않는 연산자입니다. \n");
		
	
	printf("%d %c %d = %d", x, op, y, result); 
	
	return 0;
}
