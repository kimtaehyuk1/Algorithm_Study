#include <stdio.h>


 
int main(void) {
	
	int i, input;
	
	while(1) {
		
		printf("막대의 길이(종료:-1) :");
		scanf("%d", &input);
		
		if(input==-1)
			break;
		for(i=1; i <= input; i++)
			printf("*");
		
		printf("\n");
		
	}
	 
	
	
	return 0;
}

















