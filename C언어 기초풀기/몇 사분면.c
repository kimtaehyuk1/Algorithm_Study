
#include<stdio.h>
int main(void) {
 float x, y;
 printf("��ǥ(x, y): ");
 scanf("%f %f", &x, &y);
 if (0 < x && 0 < y) {
  printf("1��и�\n");
 }
 else if (0 > x && 0 < y) {
  printf("2��и�\n");
 }
 else if (0 > x && 0 > y) {
  printf("3��и�\n");
 }
 else
  printf("4��и�\n");
 return 0;
}











