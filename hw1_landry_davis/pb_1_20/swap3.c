#include <stdio.h>

void swap3(int *x, int *y, int *z){
  int ta = *x;
  int tb = *y;
  int tc = *z;

  *x = tc;
  *y = ta;
  *z = tb;

  return;
}

int main(){
  int a,b,c;
  printf("Enter first number: ");
  scanf("%d",&a);
  printf("Enter second number: ");
  scanf("%d",&b);
  printf("Enter third number: ");
  scanf("%d",&c);
  printf("a is %d b is %d c is %d \n",a,b,c);
  swap3(&a,&b,&c);
  printf("a is %d b is %d c is %d \n",a,b,c);
  printf("Items have been swapped!!!\n");
  return 0;
}
