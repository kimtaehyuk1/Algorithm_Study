#include<stdio.h>
int main(void) {
 int time, age;
 printf("현재 시간과 나이를 입력하시오(시간, 나이): ");
 scanf("%d %d", &time, &age);
 if (time < 5) {
  	if (age <= 12 || 65 <= age) {
  		 printf("요금은 25000원입니다.\n");
	  }
 	 else
  		 printf("요금은 34000원입니다.\n");
	 }
else
  printf("요금은 10000원입니다.\n");
  
  
 return 0;
}












