#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int SumNum(int Num1, int Num2); 
int main(void) {
	int Num1, Num2, Sum;
	printf("ù��° ���� �Է�: ");
	scanf("%d", &Num1); 
	printf("�ι�° ���� �Է�: ");
	scanf("%d", &Num2);
	Sum = SumNum(Num1, Num2);
	printf("���� %d�Դϴ�. \n", Sum); 
	
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




