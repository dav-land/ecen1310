#include <stdio.h>


void printDistribution(int sz, int len[sz]){
  printf("Word length \n");
  for(int i = 1; i <= sz; i ++){
    printf("%2d : ",i);
    for(int j = 0; j< len[i];j++)
      printf("*");
    printf("\n");
  }
}


int main(int argc, char ** argv){
  int n=32;
  if(argc ==2)
    printf("Hello, this program will print out the frequencies of different words. please supply a string. If you restart and use the parameters -s #, # being a positive integer, then it will alter how large a value the max characters is.");
  else if(argc == 3){
    if(sscanf(argv[2], "%d",&n) == 0){
      printf("expected an int. \n");
      return -1;
    }
  }
  int length[n+1],err,count=0;
  for(int i = 0; i <= n ; i ++)
    length[i] = 0;
  char c;
  while((err = scanf("%c",&c)) != EOF){
    if(err != 1)
      return -1;
    if(' ' != c)
      count ++;
    else{
      length[count] ++;
      count = 0;
    }
    if(count >= n)
      count = n;
  }
  printf("\n");
  printDistribution(n,length);
  return 0;
}



