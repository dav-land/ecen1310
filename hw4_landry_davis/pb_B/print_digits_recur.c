#include <assert.h>
#include <stdio.h>

/*
this takes in the term n and recursivly prints the digits out from biggest place to smallest place
 */
int printDecimalDigits(int n){
  int temp = 0;
  if(n <= 0)
    return -1;
  if(n>0){
    temp = n%10;
    printDecimalDigits(n/10);
    printf("%d\n",temp);
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
