#include <assert.h>
#include <stdio.h>

/*
Computes the number of occurrences of value v in array a of length n and stores it in occ. Returns 0 if successful; -1 if either of a or occ is NULL; and -2 if n < 0.
*/
int numOccur(int a[], int n, int v, int *occ){
  if(!occ || !a)
    return -1;
  *occ = 0;
  if(n < 0)
    return -2;
  for(int i = 0; i < n; i++){
    if(a[i] == v)
      *occ += 1;
  }
  return 0;
}

int main(){
  int a[] = {1,2,3,4,5,4,2,2,1,-1},b = 10, c = 2, d=0;
  printf("a[] is ");
  for(int i = 0; i < b; i ++)
    printf("%d ",a[i]);
  printf("\n");
  assert(numOccur(a,b,c,&d)==0 && d==3);
  printf("Number of occurences of %d is %d.\n",c,d);
  assert(numOccur(a,b,-1,&d)==0 && d==1);
  printf("Number of occurences of %d is %d.\n",-1,d);
  assert(numOccur(NULL,b,c,&d)==-1);
  assert(numOccur(a,b,c,NULL)==-1);
  assert(numOccur(a,-3,c,&d)==-2);
  return 0;
}
