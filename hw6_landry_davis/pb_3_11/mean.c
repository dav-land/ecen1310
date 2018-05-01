#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

/*
Computes the integer mean of an array and stores it where mn references. Returns -1 for erroneous input (len <=0 or NULL array); otherwise returns 0.
*/
int mean(int *a, int len, int *mn){
  if(!a || !mn || len <=0)
    return -1;
  for(int i = 0; i < len; i++)
    *mn += a[i];
  *mn /= len;
  return 0;
}

int main(){
  int a[] = {1,2,3,4,5,6,3,6,98,-2}, b = 10, c = 0;
  assert(mean(NULL,b,&c)==-1);
  assert(mean(a,-32,&c)==-1);
  assert(mean(a,b,NULL)==-1);
  assert(mean(a,b,&c)==0);
  printf("Array: ");
  for(int i = 0; i < b; i++)
    printf("%d ",a[i]);
  printf("\n");
  printf("Mean: %d\n",c);
  return 0;
}
