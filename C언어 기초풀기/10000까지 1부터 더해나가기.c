#include <stdio.h>


//문제 : ( 1 + 2 + 3 ...n )했을때 10000을 넘기지 안으면서 가장 큰 값과, n값 


int main(void) {
	
	
	int n=0, sum=0;
	
	while(1){
		
		n++;
		sum += n;
		
		if( sum > 10000)
			break;
	} 
	
	printf("1부터 %d까지 합이 %d입니다. \n", n-1,sum-n);   //빠져나간거자체가 10000넘어서 나온거여서 
	
	
	return 0;
}

