#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int start, end;
	printf("�������� ���۴ܰ� ������ ���� �Է��ϼ���: ");
	scanf("%d %d", &start, &end);     // 1. ���۰� ������ ���� start�� end ������ �Է� �ޱ�.

	for (int i = start; i <= end; i++) {    //2. i�� ������ start ~ end ���� ��ŭ �ݺ��ϰ� �ϱ�.
		for (int j = 1; j <= 9; j++) {      
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
}





