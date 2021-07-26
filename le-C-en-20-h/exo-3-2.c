#include <stdio.h>
#include <math.h>

int main()
{
  
  printf("Calculatrice : \n\n");

  int a = 2;
  printf("Valeur de a : \n");
  scanf("%d", &a);

  int b = 3;
  printf("Valeur de b : \n");
  scanf("%d", &b);

  printf("Valeur de a + b : %d\n", a + b);
  getchar();
  return 0;
}

/*
  1) Compile: gcc -o exo-3-2 exo-3-2.c -lm
  2) Execute: ./exo-3-2
 */
