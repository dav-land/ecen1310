#include <assert.h>

int minmax(int a, int b, int *min, int *max){
  assert(min);
  assert(max);
  
  if(a<=b){
    *min=a;
    *max=b;
  }else{
    *min=b;
    *max=a;
  }
  return 0;
}

int main(){
  int x,y;
  minmax(5,4,&x,&y);
  assert(x==4&&y==5);
  minmax(5,5,&x,&y);
  assert(x==5&&y==5);
  minmax(15,-3,&x,&y);
  assert(x==-3&&y==15);
  return 0;
}
