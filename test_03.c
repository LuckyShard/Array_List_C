#include <stdio.h>
#include "array_list_int.h"


int main(){
  array_list_int a1 = ali_create();
  int i,t;
  for (i=0; i < 7; ++i) {
    ali_push_back(a1,i*3+1);
    printf("%f ocupados\n", ali_percent_occuped(a1));
  }
  t = ali_size(a1);
  printf("Tamanho de a1: %d\n",t);
  printf("a1 = { ");
  for (i=0; i < t ; ++i)
    printf("%d ", ali_get(a1,i));
  printf("}\n");

  ali_insert_at(a1, 3, 32);
  
  
  printf("get index of 32: %d \n", ali_find(a1, 32));

  t = ali_remove_from(a1, 7);
 
  printf("Tamanho de a1: %d\n",t);
  printf("a1 = { ");
  for (i=0; i < t ; ++i)
    printf("%d ", ali_get(a1,i));
  printf("}\n");
 

  ali_destroy(a1);
  return 0;
}
