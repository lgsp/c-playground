#include <stdio.h>
#include <math.h>

int main()
{
  
  printf("Calculatrice : \n\n");

  int a = 2;
  printf("Valeur de a : %d\n", a);
  getchar();

  int b = 3;
  printf("Valeur de b : %d\n", b);
  getchar();

  printf("Valeur de a + b : %d\n", a + b);
  return 0;
}

/*
  1) Compile: gcc -o exo-3-1 exo-3-1.c -lm
  2) Execute: ./exo-3-1
 */
