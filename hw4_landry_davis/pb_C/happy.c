#include <assert.h>
#include <stdio.h>

/*
this is the square of digits of given integer
*/  
int happySum(int n){
  int temp = 0,result = 0;
  if(n <= 0)
    return -1;
  while(n>0){
    temp = n%10;
    result= result+(temp*temp);
    n/=10;
  }
  return result; 
}

/*
take an integer and iterated happySum until either 1 or 4 is achieved 1 
 */
int isHappy(int n){
  int temp = n;
  while(temp != 1 && temp != 4)
    temp = happySum(temp);
  if(temp == 4)
    return 0;
  if(temp ==1)
    return 1;
  return -1;
}

int main(){
  int arr[1000],lineSpace=1;
  for(int i = 0; i < (int)(sizeof(arr)/sizeof(arr[0])); i++)
    arr[i]= isHappy(i+1);
  printf("Happy numbers: ");
  for(int i = 0; i < (int)(sizeof(arr)/sizeof(arr[0])); i++){
    if(arr[i]==1){
      lineSpace++;
      printf("%d ", i+1);
    }
    if(lineSpace%15==0){
      printf("\n");
      lineSpace++;
    }
  }
  printf("\n");
  return 0;
}
