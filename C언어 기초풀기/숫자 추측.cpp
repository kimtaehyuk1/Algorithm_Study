#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void) {
	
	
	int answer = 59;
	int guess;
	int tries = 0;
	do {
		printf("������ �����Ͽ� ���ÿ�.");
		scanf("%d", &guess);
		tries++;
		if ( guess > answer)
			printf("���ప�� �亸�� �����ϴ�.");
		if (guess < answer) 
			printf("���ప�� �亸�� �����ϴ�.");
	} while(guess != answer);
	
		printf("�����մϴ�. �õ�Ƚ��= %d", tries);
	return 0;
}




