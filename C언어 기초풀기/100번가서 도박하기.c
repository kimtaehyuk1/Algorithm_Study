#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	
	int initial_money = 50;
	int goal = 250;
	int i;
	int wins = 0;
	srand(time(NULL));
	for (i = 0; i < 100; i++) {
		
		int cash = initial_money;
		while (cash > 0 && cash < goal) {     //이 조건이면 들어가서 수행 
			if(((double)rand() / RAND_MAX) > 0.5)  //이건  / RAND_MAX면 확률로 나옴 
				cash++;
			else cash--; 
		}		                        //while문에서 빠져나오려면 돈을 다 잃거나 목표 이루거나 
	
		if(cash == goal) wins++;	
	}
	
	printf("초기 금액 $%d \n", initial_money);
	printf("목표 금액 $%d \n", goal);
	printf("100번 중에서 %d번 성공", wins);
	
	return 0;
}

