#include <assert.h>
#include <stdio.h>

/*
Removes all vowels from strting in and writes teh result to out. returns 0 if successful and -1 if either in or out is NULL.
*/
int xvowelize(char * in, char *out){
  int count = 0;
  if(!in || !out)
    return -1;
  while(*in != '\0'){
    if(*in != 'a' &&*in != 'e'&&*in != 'i'&&*in != 'o'&&*in != 'u'&&*in != 'A' &&*in != 'E'&&*in != 'I'&&*in != 'O'&&*in != 'U'){
      *out = *in;
      *out++;
    }
    *in++;
  }
  return 0;
}

/*
this is the main function that they tell us to write, but it does not include tests for null, so i added them
*/
int main(){
  char str[] = "Hello Universe!";
  char out[32];
  assert(xvowelize(NULL,out)==-1);
  assert(xvowelize(str,NULL)==-1);
  int err = xvowelize(str,out);
  assert(!err);
  printf("%s\n%s\n",str,out);
  return 0;
}
