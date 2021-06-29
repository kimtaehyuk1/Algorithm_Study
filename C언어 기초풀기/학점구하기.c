#include <stdio.h>

char decision(int score); 


int main(void) {
	
	int score;
	char Grade;
	printf("c언어 점수입력 : ");
	scanf("%d", &score);
	Grade = decision(score);
	printf("당신의 학점은 %c입니다. \n", Grade);
	return 0;
}

char decision(int score) {
	char Grade;
	switch(score/10) {
		case 10:
		case 9: {
			Grade = 'A';
			break;
		}
		case 8: {
			Grade = 'B';
			break;
		}	
		case 7: {
			Grade = 'C';
			break;
		}
		case 6: {
			Grade = 'D';
			break;
		}
		default: 
			Grade = 'F';
	}
		
			
	return Grade;
		

	

}
