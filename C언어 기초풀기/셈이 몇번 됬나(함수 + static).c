#include <stdio.h>


int add(int x, int y); 
int sub(int x, int y);  
int mul(int x, int y); 
int div(int x, int y); 





int main(void) {
	
	int x, y, i;
	char op;
	
	
	for(i = 0; i < 10; i++){
		
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d %c %d", &x, &op, &y);
		
		switch(op) {
			
			case '+':
				printf("���� ���: %d \n", add(x,y));
				break;
			case '-':
				printf("���� ���: %d \n", sub(x,y));
				break;
			case '*':
				printf("���� ���: %d \n", mul(x,y));
				break;
			case '/':
				printf("���� ���: %d \n", div(x,y));
				break;
			default:
				printf("�����ڸ� �߸� �Է��Ͽ����ϴ�. \n");
			
		}
		
			
	}
	 
	return 0;
}

int add( int x, int y) {
	
	static int count;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�. \n", count);
	
	return ( x + y);
} 

int sub( int x, int y) {
	
	static int count;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�. \n", count);
	
	return ( x - y);
} 

int mul( int x, int y) {
	
	static int count;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�. \n", count);
	
	return ( x * y);
} 

int div( int x, int y) {
	
	static int count;
	count++;
	printf("�������� �� %d�� ����Ǿ����ϴ�. \n", count);
	
	return ( x / y);
} 
















