#include <stdio.h>

int Calculation(int Investment, float InterestRate); 


int main(void) {
	int Investment, Year;
	float InterestRate;
	printf("���ڱݾ��� �Է��ϼ��� :");
	scanf("%d", &Investment);
	printf("�������� �Է��ϼ���: ");
	scanf("%f", &InterestRate);
	Year = Calculation(Investment,InterestRate);
	printf("%d���� %lf%% ������ ��� %d�� �Ŀ��� %d���� �Ѵ´�. \n", Investment,InterestRate,Year,Investment * 2);

	return 0;
}

int Calculation( int Investment, float InterestRate) {
	
	int Year = 0;
	int InitialMoney = Investment;
	while(1) {
		Investment =  Investment + (Investment * (InterestRate / 100));
		Year++;
		if( Investment >= InitialMoney * 2)
			break;
	}
	
	return Year;
	
}

	


