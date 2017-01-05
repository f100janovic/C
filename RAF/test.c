#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
int main(){
  int *p,a=1;
  p=&a;
  printf("%d\t%d\t%d\t",(*p)++,*(p++),*p++);
  return 0;
}
