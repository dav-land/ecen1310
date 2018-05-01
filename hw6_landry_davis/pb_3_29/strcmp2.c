#include <assert.h>
#include <stdio.h>

/*
Compares str1 and str2 according to "dictionary" (aka, "lexicographic") order, where characters are ordered by their ASCII values. Returns -1 if str1 comes before str2; 0 if either str1 or str2 is NULL or if they are equal; and 1 if str1 comes after str2.
*/
int strcmp(char *str1, char *str2){
  if(!str1 || !str2)
    return 0;
  while(*str1 != '\0' && *str2 != '\0'){
    if(*str1 >*str2)
      return -1;
    if(*str1<*str2)
      return 1;
    *str1++;
    *str2++;
  }
  return 0;
}

int main(){
  printf("aardvark, aardwolf %d\n",strcmp("aardvark" , "aardwolf"));
  printf("AVAST, avast %d\n", strcmp("AVAST","avast"));
  printf("ahoy, ahoy %d\n",strcmp("ahoy","ahoy"));
  printf("Watch for aardvarks!, " " Watches warent for aardwolves. %d\n",strcmp("Watch for aardvarks!","Watches aren't for aardwolves."));
  printf("zoology, zoo %d\n", strcmp ("zoology","zoo"));
  return 0;
}
