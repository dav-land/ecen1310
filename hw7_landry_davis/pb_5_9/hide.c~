#include <stdio.h>
#include <stdlib.h>

void printUsage(){
  printf("error you messed up");
}

int parseArgs(int argc, char * argv[], int * ctl){
  if(argc != 2){
    printUsage();
    return -1;
  }
  if(strcmp("-encrypt",argv[1]) == 0){
    *ctl = 1;
    return 0;
  }else if(strcmp("-decrypt",argv[1]) == 0){
    *ctl = 0;
    return 0;
  }else if(strcmp("-h",argv[1])==0){
    printUsage();
    return -1;
  }else
    return -1;
}
      
int main(int argc, char const* const argv[]){
  int shift, ctl;
  char c;
  int err = parseArgs(argc, argv,&ctl);
  if(err != 0)
    return -1;
  if(ctl == 1)
    shift = 12;
  else if (ctl == 0)
    shift = 26-12;
  while(err = scanf("%c", &c) != EOF){
    if(err != 1)
      return -1;
    char e;
    if('A' <= c && c <= 'Z')
      e = 'A' + (c - 'A' + shift) % 26;
    else if('a' <=c && c <= 'z')
      e = 'a' + (c - 'a' + shift)% 26;
    else
      e = c;
    printf("%c",e);
  }
  return 0;
}
