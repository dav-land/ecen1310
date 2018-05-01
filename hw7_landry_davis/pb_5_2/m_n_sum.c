2#include <stdio.h>

int main(int argc, char ** argv){
  if(argc != 3){
    printf("Expected exactly two arguments.\n");
    return -1;
  }
  int m,n;
  if(sscanf(argv[1], "%d", &m)==0){
    printf("expected an int.\n");
    return -1;
  }
  if(sscanf(argv[2], "%d", &n)==0){
    printf("expected an int.\n");
    return -1;
  }
  if(n <= 0){
    printf("Invalid n\n");
    return -1;
  }
  if (m <= 0){
    printf("Invalid m\n");
    return -1;
  }
  if(m > n ){
    printf("m must be smaller than n\n");
    return -1;
  }
  int sum = 0;
  for(int i = m; i <= n; i++)//goes through from m to n adding all of the integers along the way
    sum += i;
  printf("Sum: %d \n",sum);
  return 0;
}
