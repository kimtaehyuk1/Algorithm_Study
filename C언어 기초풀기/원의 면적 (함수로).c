#include <stdio.h>
# define PI 3.141592

double cal_area(double radius);
double get_radius();
 


int main(void) {
	
	double input;
	
	input = get_radius();
	
	printf("���� ������ %lf�Դϴ�. \n", cal_area(input));


	return 0;
}

double cal_area(double radius) {
	
	return PI * radius * radius;
}


double get_radius()	{
	
	double radius;
	
	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &radius);
	
	return radius;
}


