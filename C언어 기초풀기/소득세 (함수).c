#include <stdio.h>


int get_tax(int income); 

int main(void) {
	
	int income;
	
	printf("�ҵ��� �Է��Ͻÿ�(����):");
	scanf("%d", &income);

	printf("�ҵ漼�� %d���� �Դϴ�. \n", get_tax(income));

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

	
	

















