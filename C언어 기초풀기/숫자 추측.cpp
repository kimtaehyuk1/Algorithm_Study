#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void) {
	
	
	int answer = 59;
	int guess;
	int tries = 0;
	do {
		printf("정답을 추측하여 보시오.");
		scanf("%d", &guess);
		tries++;
		if ( guess > answer)
			printf("추축값이 답보다 높습니다.");
		if (guess < answer) 
			printf("추축값이 답보다 낮습니다.");
	} while(guess != answer);
	
		printf("축하합니다. 시도횟수= %d", tries);
	return 0;
}




