#include<stdio.h>
int main(void) {
 char ch;
 printf("���ڸ� �Է��Ͻÿ�: ");
 scanf("%c", &ch);
 switch(ch){
 case 'a':
 case 'e':
 case 'i':
 case 'o':
 case 'u':
  printf("�����Դϴ�.\n");
  break;
 default:
  printf("�����Դϴ�.\n");
  break;
 }
 return 0;
}

















