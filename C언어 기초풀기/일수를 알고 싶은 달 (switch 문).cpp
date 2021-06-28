#include <stdio.h>

// case 에서 문자는 됨 예) case '+': 이런식으로

int main(void) {
	
	int month, days;
	
	printf("일수를 알고싶은 달을 입력하세요: ");
	scanf("%d", &month);
	
	switch (month) 
	{
		case 2:
		
			days = 28;
			break;
		
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
			
		default:
			days = 31;
			break;			
	}


	printf("%d 월의 일수는 %d입니다.", month, days);
	return 0;
}
