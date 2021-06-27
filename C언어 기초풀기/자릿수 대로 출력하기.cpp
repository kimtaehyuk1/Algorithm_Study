#include <stdio.h>

int main(void) {
	int a, b, c, d, e;
	scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e); //1d%는 한개씩 끊어서
	printf("[%d0000]\n",a);
	printf("[%d000]\n",b);
	printf("[%d00]\n",c);
	printf("[%d0]\n",d);
	printf("[%d]\n",e);
	return 0;
}
