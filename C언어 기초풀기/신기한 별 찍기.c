#include <stdio.h>


int main(void) {
	
	
	int input, i, x, y;
	
	printf("정수를 입력하시오: ");
	scanf("%d", &input);
	
	
	for( i=1; i <= input; i++){
		
		for( x = 1; x <= input-i; x++)
			printf(" ");
		
		for( y =1; y <= i; y++)
			printf("*");
			
	printf("\n");
	} 

	return 0;
}

