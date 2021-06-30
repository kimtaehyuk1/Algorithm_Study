#include <stdio.h>


int add(int x, int y); 
int sub(int x, int y);  
int mul(int x, int y); 
int div(int x, int y); 





int main(void) {
	
	int x, y, i;
	char op;
	
	
	for(i = 0; i < 10; i++){
		
		printf("연산을 입력하시오: ");
		scanf("%d %c %d", &x, &op, &y);
		
		switch(op) {
			
			case '+':
				printf("연산 결과: %d \n", add(x,y));
				break;
			case '-':
				printf("연산 결과: %d \n", sub(x,y));
				break;
			case '*':
				printf("연산 결과: %d \n", mul(x,y));
				break;
			case '/':
				printf("연산 결과: %d \n", div(x,y));
				break;
			default:
				printf("연산자를 잘못 입력하였습니다. \n");
			
		}
		
			
	}
	 
	return 0;
}

int add( int x, int y) {
	
	static int count;
	count++;
	printf("덧셈은 총 %d번 실행되었습니다. \n", count);
	
	return ( x + y);
} 

int sub( int x, int y) {
	
	static int count;
	count++;
	printf("뺄셈은 총 %d번 실행되었습니다. \n", count);
	
	return ( x - y);
} 

int mul( int x, int y) {
	
	static int count;
	count++;
	printf("곱셈은 총 %d번 실행되었습니다. \n", count);
	
	return ( x * y);
} 

int div( int x, int y) {
	
	static int count;
	count++;
	printf("나눗셈은 총 %d번 실행되었습니다. \n", count);
	
	return ( x / y);
} 
















