#include <stdio.h>

int main(void) {
	// �ݺ����� int�� ������ ���ֱ� 
	int i;
	char a[21]; //�Է¹޴°� ���� + 1 , ������ ���ڿ��� ���� ���̴�. 
	scanf("%s", &a);
	for(i = 0; i < 21; i++) {
		if(a[i] == '\0') break; //\0�� null�̴�. 
		printf("\'%c\'\n", a[i]);			
	}
	return 0;	
}
