#include <stdio.h>


 
int main(void) {
	
	int i =1, sum =0;
	
	while(i<=100) {
		if(i%3==0)
			sum += i;
		
		i++;
		
	}
	
	printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다.\n", sum);
	return 0;
}

















