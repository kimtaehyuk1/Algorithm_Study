#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf("������ �Է��ϼ���: ");
	int n;
	scanf("%d", &n);   // 1.���� n�� ���� �Է¹ޱ�

	for (int i = 1; i <= n; i++) {          // 2. n�� �� ���� �ݺ��ϱ�
		for (int j = 1; j <= i; j++) {      // 3. n�� �ٿ� n(i)�� ���
			printf("*");
		}
		printf("\n");
	}

}






