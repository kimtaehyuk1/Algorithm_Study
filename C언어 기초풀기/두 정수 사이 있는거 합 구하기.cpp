#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int SumNum(int Num1, int Num2); 
int main(void) {
	int Num1, Num2, Sum;
	printf("첫번째 정수 입력: ");
	scanf("%d", &Num1); 
	printf("두번째 정수 입력: ");
	scanf("%d", &Num2);
	Sum = SumNum(Num1, Num2);
	printf("합은 %d입니다. \n", Sum); 
	
	return 0;
}

int SumNum(int Num1, int Num2) {
	
	int Sum = 0, Temp;
	if(Num1 > Num2) {
		Temp = Num1;
		Num1 = Num2;
		Num2 = Temp;
	}
	for( int i = Num1; i <= Num2; i++) {
	
		Sum += i;
	}
	return Sum;
}




