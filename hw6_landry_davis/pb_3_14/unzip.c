#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

/*
Unzips an array into two (opposite of zip). E.g.,
c: [1,2,3,4,5,6]
unzips into 
a: [1,3,5]
b: [2,4,6]
In this case, n is 3. returns -1 if the input is malformed and 0 otherwise.
*/

int unzip(int *a, int *b, int *c, int n){
  if(!a || !b || !c || n<0)
    return -1;
  for(int i = 0; i < 2*n; i++){
    if(i % 2 == 0)
      a[i/2] = c[i];
    else
      b[i/2] = c[i];
  }
  return 0;
}

int main(){
  int d = 5, a[d],b[d],c[]= {1,2,3,4,5,6,7,8,9,10};
  assert(unzip(NULL,b,c,d)==-1);
  assert(unzip(a,b,c,-10)==-1);
  assert(unzip(a,b,NULL,d)==-1);
  assert(unzip(a,NULL,c,d)==-1);
  assert(unzip(a,b,c,d)==0);
  printf("Array: ");
  for(int i = 0; i < 2*d; i ++)
    printf("%d ",c[i]);
  printf("\n Unzipped arrays: \n");
  for(int i = 0; i < d;i++)
    printf("%d ",a[i]);
  printf("\n");
  for(int i = 0; i < d;i++)
    printf("%d ",b[i]);
  printf("\n");
  return 0;
}



