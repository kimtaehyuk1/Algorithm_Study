#include <stdio.h>


int main(void) {
	
	
	int n, m, prime;
	
	for( n =2; n <= 100; n++) {
		
		
		prime = 0;
		for( m=2; m <= n; m++) {
			
			if(n % m ==0)
				prime++;		
			
		}
	
		if(prime == 1)
			printf("%d ",n);
		
	} 
	
	
	return 0;
}

