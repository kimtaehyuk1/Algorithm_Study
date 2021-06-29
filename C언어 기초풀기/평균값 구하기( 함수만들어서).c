#include <stdio.h>


float NumAverage(int Num1, int Num2, int Num3);


int main(void) {
	
	int Num1, Num2, Num3;
	float Avg;
	printf("첫번째 정수 입력: ");
	scanf("%d", &Num1);
	printf("두번째 정수 입력: ");
	scanf("%d", &Num2); 
	printf("세번째 정수 입력: ");
	scanf("%d", &Num3);
	Avg = NumAverage(Num1,Num2,Num3);
	printf("평균 값은 %lf입니다. \n", Avg);
	 
	return 0;
}

float NumAverage(int Num1, int Num2, int Num3) {
	
	int Sum;
	float Avg;
	Sum = Num1 + Num2 + Num3;
	Avg = Sum/ 3.0;
	return Avg;
}
