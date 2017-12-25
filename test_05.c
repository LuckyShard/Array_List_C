#include <stdio.h>
#include "array_list_int.h"


int main(){
  array_list_int a1 = ali_create();
  int i,t,c;
  for (i=0; i < 1000000 ; ++i) {
    ali_push_back(a1,i*3+1);
    /*printf("%f ocupados\n", ali_percent_occuped(a1));*/
  }
  t = ali_size(a1);
	c = ali_capacity(a1);
  printf("Tamanho de a1: %d %d\n",t,c);
  for (i=0; i < t ; ++i) {
    ali_pop_back(a1);
		/*printf("%f ocupados\n", ali_percent_occuped(a1));*/
	}
  t = ali_size(a1);
	c = ali_capacity(a1);
  printf("Tamanho de a1: %d %d\n", t, c);
  ali_destroy(a1);
  return 0;
}
