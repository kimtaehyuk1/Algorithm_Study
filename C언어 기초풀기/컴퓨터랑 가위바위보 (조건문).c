#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {
 
 int user, com;
 
 srand((int)time(NULL));
 
 printf("선택하시오(1: 가위 2: 바위 3: 보) ");
 scanf("%d", &user);
 
 com = rand() % 3 + 1;
 
 if (user == 1) {
  	if (com == 1) {
 	  	printf("비겼음\n");
 	 }
  	else if (com == 2) {
  	 	printf("컴퓨터는 바위를 선택함 컴퓨터 승\n");
 	 }
  	else
  		 printf("컴퓨터는 보를 선택함 사용자 승\n");
 }
 
 else if (user == 2) {
 	 if (com == 1) {
 	 	 printf("컴퓨터는 가위를 선택함 사용자 승\n");
 	 }
  	else if (com == 2) {
  	 printf("비겼음\n");
 	 }
 	 else
   		printf("컴퓨터는 보를 선택함 컴퓨터 승\n");
 }
 else if (user == 3) {
  	if (com == 1) {
  		 printf("컴퓨터는 가위를 선택함 컴퓨터 승\n");
 	 }
  	else if (com == 2) {
   		printf("컴퓨터는 바위를 선택함 사용자 승\n");
 	 }
  	else
   		printf("비겼음\n");
	 }
	 
 return 0;
}














