#include <stdio.h>


int main(void) {
	
	
	int a, b, c, min;
	
	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a < b) {                         // if������ �Ⱦ��� �̷��� �� ���� 
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
	
	printf("���� �������� %d�Դϴ�.\n" , min);
	
	return 0;
}







