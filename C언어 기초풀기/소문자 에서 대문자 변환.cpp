
#include <stdio.h>



int main(void) {
	
	char letter;
	
	while(1){
		
		printf("�ҹ��ڸ� �Է��Ͻÿ�:");
		scanf(" %c", &letter);   //���� �Ѱ������� ���� 
		
		if( letter == 'Q')
			 break;
		if(letter < 'a' || letter > 'z')
			continue;   //�ٽ� ���ǹ����� ���ư��� 
		
		letter -= 32;
		printf("��ȯ�� �빮�ڴ� %c�Դϴ�. \n", letter);
		
	} 

	return 0;
}




