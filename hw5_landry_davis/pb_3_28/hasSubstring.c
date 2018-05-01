#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
Returns whether str contains an instance of substr. Returns 0 if either str or substr is NULL or substr is not in str; returns 1 if substr is in str.
*/
int hasSubstring(char *str, char *substr){
  int lenOfStr = strlen(str)-1, lenOfSubstr = strlen(substr)-1;
  if(lenOfSubstr == -1)
    return 1;
  if(!str || !substr || lenOfStr < lenOfSubstr)
    return 0;
  for(int i = 0; i <= lenOfStr-lenOfSubstr; i++)
    if(str[i]==substr[0])
      for(int j = 0; j <= lenOfSubstr; j++){
	if(str[i+j] !=substr[j])
	  break;
	if(j == lenOfSubstr)
	  return 1;
      }
  return 0;
}

int main(){
  assert(hasSubstring("Hello universe!", "lo"));
  assert(hasSubstring("Hello universe!", "verse"));
  assert(hasSubstring("Hello universe!", ""));
  assert(hasSubstring("", ""));
  assert(!hasSubstring("Hello universe!", "verses"));
  assert(!hasSubstring("Hello universe!", "loun"));
  assert(!hasSubstring("Hello universe!", "erse!!"));
  return 0;
}
