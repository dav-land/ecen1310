#include <assert.h>

int product(int n){
  if(n<0)//sees if n is less than 0
    return -1;
  if(n==1)
    return 1;
  return n * product(n-1); //return n times the product of the smaller n
}

int main(){
  assert(product(3)==6);//tests 3
  assert(product(-11)==-1);//test a fail case
  assert(product(10)==3628800);//tests large number
  assert(product(0)==0);//tests special case
  return 0;
}

