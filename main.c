#include "addition.h"

#include<stdlib.h>
#include<stdio.h>

int main() {


  int a , b;

  printf("Entrez deux nombers \n" );
  scanf("%d%d",&a, &b );

  somme( a, b);

  printf("la somme est %d\n",somme (a,b) );
  return 0;
}
