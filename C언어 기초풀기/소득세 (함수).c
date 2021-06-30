#include <stdio.h>


int get_tax(int income); 

int main(void) {
	
	int income;
	
	printf("소득을 입력하시오(만원):");
	scanf("%d", &income);

	printf("소득세는 %d만원 입니다. \n", get_tax(income));

	return 0;
}

int get_tax(int income) {
	
	int result;
	
	if(income > 1000)
		result = income*0.1;
	else
		result = income*0.08;
		
	
	return result;
	
	
}

	
	

















