#include <stdio.h>


int is_multiple(int n, int m); 
 
int main(void) {
	
	int n,m;
	printf("ù��° ������ �Է��ϼ���:");
	scanf("%d", &n);
	
	printf("�ι�° ������ �Է��ϼ���:");
	scanf("%d", &m);
	
	if(is_multiple(n,m) ==1)
		printf("%d�� %d�� ����Դϴ�. \n", n,m);
	else if(is_multiple(n,m) ==0)
		printf("%d�� %d�� ����� �ƴմϴ�. \n", n,m);
	
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

	
	

















