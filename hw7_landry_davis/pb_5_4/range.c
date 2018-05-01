#include <stdio.h>

void printUsage(){
  printf("Usage: range is max - min of [data file], where the file is a ""nonempty list of integers, you messed up. \n"); 
}

int main(){
  int min, max;
  if(scanf("%d" , &min) != 1){//sets the min to first value
    printUsage();
    return -1;
  }
  max = min;//sets max to same value
  int rc, val;
  while((rc = scanf("%d",&val)) != EOF){//goes through file setting val to what is in the file
    if(rc == 0){
      printUsage();
      return -1;
    }
    if(val < min)
      min = val;
    if(val > max)
      max = val;
  }

  int range = max - min;//calculates the range
  printf("Range: %d\n",range);
  return 0;
}
    
