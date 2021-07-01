#include <stdio.h>
#include <stdlib.h>
# define _CRT_SECURE_NO_WARNINGS 


	int get_dice_face(); //주사위 난수 함수 
	int count_num1(); // 1번 휫수 
	int count_num2(); // 2번 횟수 
	int count_num3(); //3번 횟수 
	int count_num4(); //4번 횟수 
	int count_num5();  //5번 횟수 
	int count_num6();  //6번 횟수 

int main(void) {
	
	int i, num;
	int count1 = 0; 
	int count2 = 0; 
	int count3 = 0; 
	int count4 = 0;
	int count5 = 0; 
	int count6 = 0; 
	
	 
	for (i = 0; i < 100; i++) {
		num = get_dice_face();
		
		if ( num ==1) {
			count1 = count_num1();
		}
		else if ( num ==2) {
			count2 = count_num2();
		}
		else if ( num ==3) {
			count3 = count_num3();
		}
		else if ( num ==4) {
			count4 = count_num4();
		}
		else if ( num ==5) {
			count5 = count_num5();
		}
		else if ( num ==6) {
			count6 = count_num6();
		}
	}
	 
	 printf("1->%d\n2->%d\n3->%d\n4->%d\n5->%d\n6->%d\n", count1, count2, count3, count4, count5, count6);

	 
	return 0;
} 



int get_dice_face() {
	
	return rand() % 6 + 1;  //이래야 1~6나옴 
}

int count_num1() {
	static int count;
	count++;
	return count;
} 

int count_num2() {
	static int count;
	count++;
	return count;
} 

int count_num3() {
	static int count;
	count++;
	return count;
} 

int count_num4() {
	static int count;
	count++;
	return count;
} 

int count_num5() {
	static int count;
	count++;
	return count;
} 

int count_num6() {
	static int count;
	count++;
	return count;
} 








