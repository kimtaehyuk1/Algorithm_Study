#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int start, end;
	printf("구구단의 시작단과 마지막 단을 입력하세요: ");
	scanf("%d %d", &start, &end);     // 1. 시작과 마지막 단을 start와 end 변수로 입력 받기.

	for (int i = start; i <= end; i++) {    //2. i의 변수는 start ~ end 범위 만큼 반복하게 하기.
		for (int j = 1; j <= 9; j++) {      
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
}





