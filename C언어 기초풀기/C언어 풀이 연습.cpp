#include <stdio.h>

int main(void) {
	// 반복문의 int는 밖으로 빼주기 
	int i;
	char a[21]; //입력받는거 길이 + 1 , 뭔가의 문자열을 받을 것이다. 
	scanf("%s", &a);
	for(i = 0; i < 21; i++) {
		if(a[i] == '\0') break; //\0은 null이다. 
		printf("\'%c\'\n", a[i]);			
	}
	return 0;	
}
