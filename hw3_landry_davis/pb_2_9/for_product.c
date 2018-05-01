#include <assert.h>

int product(int n){
  int result = 1;
  if(n==0)
    return 0;
  if(n<0 || !n)
    return -1;
  for(int i=n;i>0;i--)//for loop to iterate until n! is achieved
    result = result *i;
  return result;
}

int main(){
  assert(product(3)==6);//tests 3
  assert(product(-11)==-1);//tests bad case
  assert(product(10)==3628800);//tests big number
  assert(product(0)==0);//tests special case
  return 0;
}
