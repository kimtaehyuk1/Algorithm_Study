
#include<stdio.h>
int main(void) {
 float x, y;
 printf("좌표(x, y): ");
 scanf("%f %f", &x, &y);
 if (0 < x && 0 < y) {
  printf("1사분면\n");
 }
 else if (0 > x && 0 < y) {
  printf("2사분면\n");
 }
 else if (0 > x && 0 > y) {
  printf("3사분면\n");
 }
 else
  printf("4사분면\n");
 return 0;
}











