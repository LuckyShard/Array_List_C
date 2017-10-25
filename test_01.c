#include <stdio.h>
#include "array_list_int.h"


int main(){
  array_list_int a1 = ali_create();
  int i,t,elementi =0,elementAt,newval , j;
  double p;
  for (i=0; i < 8 ; ++i)
    ali_push_back(a1,i*3+1);
  t = ali_size(a1);
  printf("Tamanho de a1: %d\n",t);
  printf("a1 = { ");
  for (i=0; i < t ; ++i)
    printf("%d ", ali_get(a1,i));
  printf("}\n");
  printf("Digite o elemento que deseja achar:\n");
  scanf("%d", &elementi);
  elementAt = ali_find(a1,elementi);
  printf("\nDigite o novo valor para ser inserido: \n");
  scanf("%d", &newval);
  printf("\nDigite o indice no qual deseja incluir o valor: \n");
  scanf("%d", &j);
  printf("\n");
  ali_insert_at(a1,j,newval);
  printf("a1 = { ");
  for (i=0; i < t ; ++i)
    printf("%d ", ali_get(a1,i));
  printf("}\n");
  printf("o elemento no index %d é : %d \n",elementi,elementAt);
  p = ali_percent_occuped(a1);
  printf("Porcentagem ocupada em a1 : %f \n",p);


  printf("--------> pop_back <--------\n");
  for (i=0; i < 8 ; ++i)
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
