#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {
 
 int user, com;
 
 srand((int)time(NULL));
 
 printf("�����Ͻÿ�(1: ���� 2: ���� 3: ��) ");
 scanf("%d", &user);
 
 com = rand() % 3 + 1;
 
 if (user == 1) {
  	if (com == 1) {
 	  	printf("�����\n");
 	 }
  	else if (com == 2) {
  	 	printf("��ǻ�ʹ� ������ ������ ��ǻ�� ��\n");
 	 }
  	else
  		 printf("��ǻ�ʹ� ���� ������ ����� ��\n");
 }
 
 else if (user == 2) {
 	 if (com == 1) {
 	 	 printf("��ǻ�ʹ� ������ ������ ����� ��\n");
 	 }
  	else if (com == 2) {
  	 printf("�����\n");
 	 }
 	 else
   		printf("��ǻ�ʹ� ���� ������ ��ǻ�� ��\n");
 }
 else if (user == 3) {
  	if (com == 1) {
  		 printf("��ǻ�ʹ� ������ ������ ��ǻ�� ��\n");
 	 }
  	else if (com == 2) {
   		printf("��ǻ�ʹ� ������ ������ ����� ��\n");
 	 }
  	else
   		printf("�����\n");
	 }
	 
 return 0;
}














