#include <stdio.h>


int is_multiple(int n, int m); 
 
int main(void) {
	
	int n,m;
	printf("첫번째 정수를 입력하세요:");
	scanf("%d", &n);
	
	printf("두번째 정수를 입력하세요:");
	scanf("%d", &m);
	
	if(is_multiple(n,m) ==1)
		printf("%d는 %d의 배수입니다. \n", n,m);
	else if(is_multiple(n,m) ==0)
		printf("%d는 %d의 배수가 아닙니다. \n", n,m);
	
	return 0;
}

int is_multiple(int n, int m) {
	
	int result;
	result = n%m;
	
	if(result ==0)
		return 1;
	else
		return 0;
	
} 

	
	

















