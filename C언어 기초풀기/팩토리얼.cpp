#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num; //�Է� ���� ����
	int fnum = 1; //���丮�� ���� ���� ����.
	printf("���� �Է� :");
	scanf("%d", &num);
	
	if (num != 0) {
		for (int i = 1; i < num; i++ ){
			fnum *= i;
		}
	} 
	printf("%d!�� %d�Դϴ�.\n", num, fnum);
	
	
	return 0;
}





