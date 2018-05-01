#include <assert.h>

int smallerabsval(int x, int y){
  int tempx = x;
  int tempy = y;
  if(x<0)
    tempx=-x;
  if(y<0)
    tempy=-y;
  if(tempx==tempy && (x>0||y>0))
    return tempx;
  else if(x<0&&y<0 && x==y)
    return x;
  if(tempx<tempy)
    return x;
  return y;
}

int main(){
  assert(smallerabsval(10,11)==10);
  assert(smallerabsval(-1,1)==1);
  assert(smallerabsval(-20,3)==3);
  assert(smallerabsval(-4,-2)==-2);
  return 0;
}
