#include <stdio.h>


float NumAverage(int Num1, int Num2, int Num3);


int main(void) {
	
	int Num1, Num2, Num3;
	float Avg;
	printf("ù��° ���� �Է�: ");
	scanf("%d", &Num1);
	printf("�ι�° ���� �Է�: ");
	scanf("%d", &Num2); 
	printf("����° ���� �Է�: ");
	scanf("%d", &Num3);
	Avg = NumAverage(Num1,Num2,Num3);
	printf("��� ���� %lf�Դϴ�. \n", Avg);
	 
	return 0;
}

float NumAverage(int Num1, int Num2, int Num3) {
	
	int Sum;
	float Avg;
	Sum = Num1 + Num2 + Num3;
	Avg = Sum/ 3.0;
	return Avg;
}
