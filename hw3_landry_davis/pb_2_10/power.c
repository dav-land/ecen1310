#include <assert.h>
#include <stdio.h>

int power(int a, int n, int * p){
  int result = 1;
  if(n<0 || !p)
    return -1;
  for(int i = n; i >0; i--)// iterates until the power is achieved
    result = result *a;
  *p = result;
  return 0;
}

int main(){
  int x=5,y=3,pow;
  assert(power(x,y,&pow)==0);//this is perfect and excess amounts of code that dont matter
  printf("%d^%d = %d\n", x,y,pow);
  x=2;
  y=10;
  assert(power(x,y,&pow)==0);
  printf("%d^%d = %d\n", x,y,pow);
    x=2;
  y=-10;
  assert(power(x,y,&pow)==-1);
    x=0;
  y=10;
  assert(power(x,y,&pow)==0);
  printf("%d^%d = %d\n", x,y,pow);
    x=2;
  y=0;
  assert(power(x,y,&pow)==0);
  printf("%d^%d = %d\n", x,y,pow);
  return 0;
}
