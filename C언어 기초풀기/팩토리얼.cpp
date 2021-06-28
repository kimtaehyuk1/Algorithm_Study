#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num; //입력 받을 변수
	int fnum = 1; //팩토리얼 값을 담을 변수.
	printf("숫자 입력 :");
	scanf("%d", &num);
	
	if (num != 0) {
		for (int i = 1; i < num; i++ ){
			fnum *= i;
		}
	} 
	printf("%d!는 %d입니다.\n", num, fnum);
	
	
	return 0;
}





