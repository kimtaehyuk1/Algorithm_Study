#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double f_rand();


 
int main(void) {
	
	int i;
	srand(time(NULL));
	for(i=0; i < 5; i++) {
		
		printf("%f", f_rand());
	}
	
	return 0;
}


double f_rand() {
	
	return (double)rand() / RAND_MAX;
	
}

	
	

















