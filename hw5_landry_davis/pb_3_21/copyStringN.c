#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
Copies at most n-1 characters of string in into the buffer pointed to by out. If n is reached, returns -2. Otherwise, returns -1 for malformed inputs and 0 upon successful completion.
*/
int copyStringN(char *in, char *out, int n){
  int p = n;
  if(!in || !out)
    return -1;
  while(*in && p > 0){
    *out++ = *in++;
    p--;
  }
  *out = '\0';
  if(n == 0)//only returns 0 if the string length is 0
    return -2;
  return 0;
}

int main(){
  char a[] = "Hello there",b[] = "";
  int len = strlen(a);
  assert(copyStringN("hi", NULL,2)== -1);
  assert(copyStringN(NULL, "hi",2)==-1);
  printf("String a starts as: %s\n",a);
  assert(copyStringN(a,b,len)==0);
  printf("Copied string: %s\n",b);
  strcpy(a,"Few s!!!");
  printf("String a starts as: %s\n",a);
  assert(copyStringN(a,b,strlen(a))==0);
  printf("Copied string: %s\n",b);
  strcpy(a,"");
  printf("String a starts as: %s\n",a);
  assert(copyStringN(a,b,strlen(a))==-2);
  printf("Copied string: %s\n",b);
  return 0;
}
