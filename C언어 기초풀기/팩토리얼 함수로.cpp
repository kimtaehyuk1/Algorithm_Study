#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int factorial(int n);

int main(void) {
	int num,i; //�Է� ���� ����

	int result;
	
	for(i = 0; i<5; i++){
	
	printf("���� �Է� :");
	scanf("%d", &num);
	
	result = factorial(num);
	
	printf("%d!�� ����� %d�Դϴ�.\n",num,result);
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





