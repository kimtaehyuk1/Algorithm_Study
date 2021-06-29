
#include <stdio.h>



int main(void) {
	
	char letter;
	
	while(1){
		
		printf("소문자를 입력하시요:");
		scanf(" %c", &letter);   //문자 한개넣을때 조심 
		
		if( letter == 'Q')
			 break;
		if(letter < 'a' || letter > 'z')
			continue;   //다시 조건문으로 돌아가라 
		
		letter -= 32;
		printf("변환된 대문자는 %c입니다. \n", letter);
		
	} 

	return 0;
}




