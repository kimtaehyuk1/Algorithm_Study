#include <stdio.h>

int Calculation(int Investment, float InterestRate); 


int main(void) {
	int Investment, Year;
	float InterestRate;
	printf("투자금액을 입력하세요 :");
	scanf("%d", &Investment);
	printf("이자율을 입력하세요: ");
	scanf("%f", &InterestRate);
	Year = Calculation(Investment,InterestRate);
	printf("%d원을 %lf%% 복리로 운영시 %d년 후에는 %d원이 넘는다. \n", Investment,InterestRate,Year,Investment * 2);

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

	


