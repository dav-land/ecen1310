#include <assert.h>
#include <stdio.h>

/*
this function takes in an integer and adress and returns the integer swuare root of the number taken in 
 */
int multiSqrt(int n, int *isr){
  if(n<0 || !isr){
    *isr = 0;
    return -1;
  }
  *isr = 0;
  if(n==0)
    return 0;
  for(int i = 0; i<=n; i++){
    if(i*i>n){
      *isr = i-1;
      break;
    }
  }
  return 0;
}

/*
this is the same function as multiSqrt, but it does the calculations only using addition and division by two
 */
int isqrt(int n, int *isr){
  int temp = 0,i=1;
  if(n<0 || !isr){
    *isr = 0;
    return -1;
  }
  *isr =0;
  if(n==0)
    return 0;
  while(temp <= n){
    temp += i;
    if(temp > n)
      *isr = i/2;
    i+=2;
  }
  return 0;
}

/*
this is the main function it only contains test cases and makes sure that the programs return the right thing. Test cases can easily be added, the nubmers wanted to be tested can be added to the end of b[] and what they will return is added to the end of d[]
 */
int main(){
  int testCases[]= {11,2,-11,227,0,1111},intSqrt,returnValue[]={0,0,-1,0,0,0};
  for(int i = 0; i < (int)(sizeof(testCases)/sizeof(testCases[0]));i++){
    assert(multiSqrt(testCases[i],&intSqrt)==returnValue[i]);
    printf("First method \nx= %d, sqrt= %d\n",testCases[i],intSqrt);
    assert(isqrt(testCases[i],&intSqrt)==returnValue[i]);
    printf("Second method \nx= %d, sqrt= %d\n",testCases[i],intSqrt);
  }
}
