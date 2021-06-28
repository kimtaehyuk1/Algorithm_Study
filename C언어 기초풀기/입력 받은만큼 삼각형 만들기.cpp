#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf("정수를 입력하세요: ");
	int n;
	scanf("%d", &n);   // 1.변수 n에 정수 입력받기

	for (int i = 1; i <= n; i++) {          // 2. n번 줄 까지 반복하기
		for (int j = 1; j <= i; j++) {      // 3. n번 줄에 n(i)번 출력
			printf("*");
		}
		printf("\n");
	}

}






