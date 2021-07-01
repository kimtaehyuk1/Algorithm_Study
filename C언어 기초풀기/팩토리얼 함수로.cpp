#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int factorial(int n);

int main(void) {
	int num,i; //입력 받을 변수

	int result;
	
	for(i = 0; i<5; i++){
	
	printf("숫자 입력 :");
	scanf("%d", &num);
	
	result = factorial(num);
	
	printf("%d!의 결과는 %d입니다.\n",num,result);
	}

	
	return 0;
}

int factorial(int n) {
	
	int i = 1;
	int fact = 1;	

	do{
		
		fact *= i;
		i++;
		
	}while( i <= n );
	
	return fact;
	
}





