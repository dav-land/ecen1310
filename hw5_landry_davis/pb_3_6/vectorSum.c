#include <stdio.h>
#include <assert.h>

/*
Computes the sum of two n-dimensional vectors, x and y, and stores it in vector sum. Returns 0 if successful; -1 if any of x,y or sum is NULL; and -2 if n<=0.
*/
int vectorSum(int x[], int y[], int n, int sum[]){
  if(!x || !y || !sum)
    return -1;
  if(n<=0)
    return -2;
  for(int i = 0; i < n; i++)
    sum[i] = x[i] + y[i];
  return 0;
}

int main(){
  int a[] = {1,2,3,4,5}, b[] = {5,4,3,2,1}, c = 5, result[c];
  printf("a[] is ");
  for(int i = 0; i < c; i ++)
    printf("%d ",a[i]);
  printf("\n");
  printf("b[] is ");
  for(int i = 0; i < c; i ++)
    printf("%d ",b[i]);
  printf("\n");
  assert(vectorSum(NULL,b, c, result)==-1);
  assert(vectorSum(a,NULL,c,result)==-1);
  assert(vectorSum(a,b,c,NULL)==-1);
  assert(vectorSum(a,b,c,result)== 0);
  printf("result[] is ");
  for(int i = 0; i < c; i ++)
    printf("%d ",result[i]);
  printf("\n");
  assert(vectorSum(a,b,-3,result)==-2);
  a[0] = -3;
  a[3] = -5;
  a[4] = 0;
  printf("a[] changes to  ");
  for(int i = 0; i < c; i ++)
    printf("%d ",a[i]);
  printf("\n");
  assert(vectorSum(a,b,c,result)==0);
  printf("result[] is ");
  for(int i = 0; i < c; i ++)
    printf("%d ",result[i]);
  printf("\n");
  return 0;
}
