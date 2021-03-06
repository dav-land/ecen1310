#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

/*
Computes the minimum and maximum elements of the array a of length n, storing them in the memory cells to which min and mac, respectively, point. Returns 0 if successful; -1 if one or more of a, min, or mac is NULL; and -2 if n<= 0;
*/

int minmax(int *a, int n, int *min, int *max){
 if(!a || !min || !max)
    return -1;
  *min = a[0];
  *max = a[0];
  if(n <= 0)
    return -2;
  for(int i = 0; i < n; i++){
    if(a[i] > *max)
      *max = a[i];
    if(a[i] < *min)
      *min = a[i];
  }
  return 0;
}

int main(){
  int a[] = {1,2,32,4,5,3,2,1,32,-31}, b = 10,c = 0,d = 0;
  assert(minmax(a,b, NULL,&d)==-1);
  assert(minmax(a,b,&c,NULL)==-1);
  assert(minmax(NULL,b,&c,&d)==-1);
  assert(minmax(a,-4,&c,&d)==-2);
  assert(minmax(a,b,&c,&d)==0);
  printf("Array: ");
  for(int i = 0; i < b; i++)
    printf("%d ",a[i]);
  printf("\n");
  printf("Min: %d | Max: %d\n",c,d);
  int e[] = {1,1,1,1,1,1,1};
  assert(minmax(e,7,&c,&d)==0);
  printf("Array: {1,1,1,1,1,1,1}");
  printf("\n");
  printf("Min: %d | Max: %d\n",c,d);  
  return 0;
}
