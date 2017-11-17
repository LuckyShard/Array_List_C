#include <stdio.h>
#include "array_list_int.h"


int main(){
  array_list_int a1 = ali_create();
  int i,t,elementi =0,elementAt,newval , j,cap,del;
  double p;
  for (i=0; i < 8 ; ++i)
    ali_push_back(a1,i*3+1);
  t = ali_size(a1);
  printf("Tamanho de a1: %d\n",t);
  printf("a1 = { ");
  for (i=0; i < t ; ++i)
    printf("%d ", ali_get(a1,i));
  printf("}\n");
  printf("Digite um item para busca:\n");
  scanf("%d", &elementi);
  elementAt = ali_find(a1,elementi);
  printf("Digite o novo valor para ser inserido: \n");
  scanf("%d", &newval);
  printf("Digite o indice no qual deseja incluir o valor: \n");
  scanf("%d", &j);
  ali_insert_at(a1,j,newval);
  printf("a1 = { ");
  for (i=0; i < t ; ++i)
    printf("%d ", ali_get(a1,i));
  printf("}\n");
  printf("o elemento %d se encontra no indice : %d \n",elementi,elementAt);
  p = ali_percent_occuped(a1);
  printf("Porcentagem ocupada em a1 : %f \n",p);
  cap = ali_capacity(a1);
  printf("Capacidade total do Arraylist: %d\n",cap);
  printf("Digite o index do elemento que deseja excluir: \n");
  scanf("%d",&del);
  ali_remove_from(a1,del);
  t = ali_size(a1);
  printf("Tamanho de a1: %d\n",t);
  printf("a1 = { ");
  for (i=0; i < t ; ++i)
    printf("%d ", ali_get(a1,i));
  printf("}\n");
  printf("--------> pop_back <--------\n");
  t = ali_size(a1);
  for (i=0; i < t ; ++i)
    ali_pop_back(a1);
  t = ali_size(a1);
  printf("Tamanho de a1: %d\n",t);
  printf("a1 = { ");
  for (i=0; i < t ; ++i)
    printf("%d ", ali_get(a1,i));
  printf("}\n");
  ali_destroy(a1);
  printf("<3");
  return 0;
}
