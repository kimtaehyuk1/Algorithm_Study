#include <stdio.h>


//���� : ( 1 + 2 + 3 ...n )������ 10000�� �ѱ��� �����鼭 ���� ū ����, n�� 


int main(void) {
	
	
	int n=0, sum=0;
	
	while(1){
		
		n++;
		sum += n;
		
		if( sum > 10000)
			break;
	} 
	
	printf("1���� %d���� ���� %d�Դϴ�. \n", n-1,sum-n);   //������������ü�� 10000�Ѿ ���°ſ��� 
	
	
	return 0;
}

