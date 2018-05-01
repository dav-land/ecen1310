#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Writes the message of msgIn into msgOut, except with all lowercase letters. Returns 0 is successful and -1 if either of msgIn or msgOut is NULL.
*/
int whisper(char *msgIn, char *msgOut){
  char c;
  if(!msgIn || !msgOut)
    return -1;
  for(;*msgIn != '\0';msgIn++){
    c = *msgIn;
    if('A'<= c && c <= 'Z')
      c+= 'a'-'A';
    *msgOut = c;
    msgOut++;
  }
  *msgOut = '\0';
  return 0;
}

int main(){
  char msg[] = "Hello WORld!!";
  char out[100];
  assert(!whisper(msg, out));
  printf ("%s -> %s \n", msg,out);
  assert(whisper(NULL, out));
  assert(whisper(msg,NULL));
  strcpy(msg, "WOW THIS WORKS");
  assert(!whisper(msg, out));
  printf ("%s -> %s \n", msg,out);
  strcpy(msg, "wow this may");
  assert(!whisper(msg, out));
  printf ("%s -> %s \n", msg,out);
  strcpy(msg,"What AbT %#$()");
  assert(!whisper(msg, out));
  printf ("%s -> %s \n", msg,out);
  return 0;
}
