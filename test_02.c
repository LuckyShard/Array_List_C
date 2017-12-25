#include <stdio.h>
#include "array_list_int.h"


int main(){
  array_list_int a1 = ali_create();
  int i,t;
  for (i=0; i < 50; ++i) {
    ali_push_back(a1,i*3+1);
    printf("%d ocupados \n",(int)(100*ali_percent_occuped(a1)));
  }
  t = ali_size(a1);
  printf("Tamanho de a1: %d\n",t);
  printf("a1 = { ");
  for (i=0; i < t ; ++i)
    printf("%d ", ali_get(a1,i));
  printf("}\n");
  t = ali_insert_at(a1, 55, 31);
  printf("Tamanho de a1: %d\n",t);
  printf("a1 = { ");
  for(i = 0; i < t; ++i)
    printf("%d ", ali_get(a1, i));
  printf("}\n");
  printf("capacidade de a1: %d\n",ali_capacity(a1));
  t = ali_insert_at(a1, 4, 32);
  printf("tamanho de a1: %d\n",t);
  printf("capacidade de a1: %d\n",ali_capacity(a1));
  printf("a1 = { ");
  for(i = 0; i < t; ++i)
    printf("%d ", ali_get(a1, i));
  printf("}\n");
  t = ali_remove_from(a1, 51);
  printf("tamanho de a1: %d\n",t);
  printf("capacidade de a1: %d\n",ali_capacity(a1));
  printf("%f ocupados \n", 100*ali_percent_occuped(a1));
  printf("a1 = { ");
  for(i = 0; i < t; ++i)
    printf("%d ", ali_get(a1, i));
  printf("}\n");
  for (i=0; i < 51; ++i)
    ali_pop_back(a1);
  t = ali_size(a1);
  printf("Tamanho de a1: %d\n",t);
  printf("a1 = { ");
  for (i=0; i < t ; ++i)
    printf("%d ", ali_get(a1,i));
  printf("}\n");
  ali_destroy(a1);
  return 0;
}
