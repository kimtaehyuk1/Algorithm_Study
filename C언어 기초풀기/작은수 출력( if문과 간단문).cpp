#include <stdio.h>


int main(void) {
	
	
	int a, b, c, min;
	
	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a < b) {                         // if문으로 안쓰고 이렇게 도 가능 
		if (a < c)                   // min = (a < b)? a : b;
		min = a;		     // min = (min < c)? min : c; 
		else
		min = c;
	}
	
	else{
		if (b < c)
		min = b;
		else
		min = c;
	}
	
	printf("제일 작은수는 %d입니다.\n" , min);
	
	return 0;
}







