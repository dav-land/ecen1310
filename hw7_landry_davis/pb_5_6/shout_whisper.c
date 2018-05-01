#include <stdio.h>

int main(int argc, char const * const argv[]){

  if(argc != 2){
    printf("Invalid number of functions\n");
    return -1;
  }
  
  char c;
  int err;
  if(strcmp("-w",argv[1])==0){
    while(err = scanf("%c",&c) != EOF){

      if(err != 1)
	return -1;
      char e;
      if('A' <= c && 'Z' >= c)
	e = c + 'a'-'A';
      else
	e = c;
      printf("%c",e);
    }
    
  }else if(strcmp("-s",argv[1])==0){
    
    while(err = scanf("%c",&c) != EOF){
      if(err != 1)
	return -1;
      char e;
      if('a' <= c && 'z' >= c)
	e = c - ('a'-'A');
      else
	e = c;
      printf("%c",e);
    }
  }else{
    printf("Invalid arguments");
    return -1;
  }
    
  return 0;
}
