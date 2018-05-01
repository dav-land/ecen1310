#include <assert.h>
#include <stdio.h>
/*
this prints the numbers starting in the ones digit.  This is done by taking the mod of 10 then dividing by 10.
 */
int printDecimalDigits(int n){
  int temp = 0;
  if(n <= 0)
    return -1;
  while(n>0){
    temp = n%10;
    printf("%d\n",temp);
    n/=10;
  }
  return 0;
}

int main(){
  int x = 1302;
  printf("%d\n",x);
  assert(printDecimalDigits(x)==0);
  x= 0;
  assert(printDecimalDigits(x)==-1);
  x=-11;
  assert(printDecimalDigits(x)==-1);
  x=10;
  printf("%d\n",x);
  assert(printDecimalDigits(x)==0);
  return 0;
}
