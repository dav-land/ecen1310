#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

/*
Returns 0 if str or suf is NULL or if suf is not a suffix of str.  Otherwise returns 1.
*/
int suffix(char *str, char *suf){
  int lenOfSuf, lenOfStr;
  if(!str || !suf)
    return 0;
  for(lenOfStr = 0; str[lenOfStr] != '\0'; lenOfStr++);
  for(lenOfSuf = 0; suf[lenOfSuf] != '\0'; lenOfSuf++);
  lenOfSuf--;
  lenOfStr--;
  if(lenOfSuf <0)
    return 0;
  if(lenOfSuf > lenOfStr)
    return 0;
  while(lenOfSuf>=0){
    if(suf[lenOfSuf] != str[lenOfStr])
      return 0;
    lenOfStr--;
    lenOfSuf--;
  } 
  return 1;
}

int main(){
  char str[] = "running",suf[] = "ing";
  assert(suffix(str,suf)==1);
  assert(suffix("","hi")== 0);
  assert(suffix("hi","")==0);
  assert(suffix(NULL,"hi")== 0);
  assert(suffix("hi",NULL)==0);
  assert(suffix("weirded","ed")==1);
  assert(suffix("hello","ed")==0);
  return 0;
}
