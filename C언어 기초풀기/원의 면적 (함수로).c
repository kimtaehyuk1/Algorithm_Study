#include <stdio.h>
# define PI 3.141592

double cal_area(double radius);
double get_radius();
 


int main(void) {
	
	double input;
	
	input = get_radius();
	
	printf("원의 면적은 %lf입니다. \n", cal_area(input));


	return 0;
}

double cal_area(double radius) {
	
	return PI * radius * radius;
}


double get_radius()	{
	
	double radius;
	
	printf("원의 반지름을 입력하시오: ");
	scanf("%lf", &radius);
	
	return radius;
}


