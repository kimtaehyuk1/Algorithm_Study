#include<stdio.h>
int main(void) {
 int time, age;
 printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");
 scanf("%d %d", &time, &age);
 if (time < 5) {
  	if (age <= 12 || 65 <= age) {
  		 printf("����� 25000���Դϴ�.\n");
	  }
 	 else
  		 printf("����� 34000���Դϴ�.\n");
	 }
else
  printf("����� 10000���Դϴ�.\n");
  
  
 return 0;
}












