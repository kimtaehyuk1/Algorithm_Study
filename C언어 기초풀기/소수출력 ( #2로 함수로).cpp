#include <stdio.h>



int get_integer(void){
	
	int n;
	
	printf("정수를 입력하시오:");
	scanf("%d", &n);
	return n; 
	
	
} 


int is_prime(int n)
{
	
	int i;
	
	for (i = 2; i < n; i++)          //이부분은 1부터도 아니고 n도 포함안되는 소수찾기  
	{
		
		if ( n % i ==0)
			return 0; 
		
	}
	return 1;

}




int main(void) {
	
	int n, result;
	n = get_integer();
	
	if (is_prime(n) ==1)
		printf("%d는 소수입니다. \n",n);
	else
		printf("%d는 소수가 아닙니다. \n",n);
	
	return 0;
}



	


