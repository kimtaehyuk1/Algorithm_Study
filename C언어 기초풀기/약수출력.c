#include <stdio.h>


int main(void) {
	
	
	
	int input,i;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &input);
	
	printf("���:");
	
	for(i=1; i <= input; i++){
		if(input % i ==0)
			printf("%d ", i);
	}	

	return 0;
}

