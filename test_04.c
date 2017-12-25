#include <stdio.h>
#include "array_list_int.h"


int main(){
  array_list_int a1 = ali_create();
  int i,t;
  for (i=0; i < 1000000; ++i) {
    ali_push_back(a1,i*3+1);
    printf("%f %c\n",ali_percent_occuped(a1)*100, '%');
  }
  t = ali_size(a1);
  printf("Tamanho de a1: %d\n",t);

  ali_destroy(a1);
  return 0;
}
