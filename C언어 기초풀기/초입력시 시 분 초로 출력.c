#include <stdio.h>

void Convert(int InputSec); 


int main(void) {
	

	int InputSec;
	printf("�ʸ� �Է��ϼ��� : ");
	scanf("%d", &InputSec);
	Convert(InputSec); 

	return 0;
}

void Convert(int InputSec) {
	
	int Hour, Min, Sec;
	Sec = InputSec % 60;
	Min = InputSec / 60;
	Hour = Min / 60;
	Min = Min % 60;
	printf(" [%d�� : %d�� : %d��] \n", Hour,Min,Sec);

}

	


