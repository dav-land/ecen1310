#include <assert.h>

int product(int n){
  int result = 1;
  if(n==0)
    return 0;
  if(n<0 || !n)//makes sure n is not null
    return -1;
  while(n>0){
    result = n *result;//while n is positive it multiplyes it by result
    n--;
  }
  return result;
}

int main(){
  assert(product(3)==6);//tests 3
  assert(product(-11)==-1);//tests bad case
  assert(product(10)==3628800);//tests large number
  assert(product(0)==0);//tests special case
  return 0;
}
