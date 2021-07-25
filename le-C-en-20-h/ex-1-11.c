#include <stdio.h>

int main()
{
  /* Affiche premier message */
  puts ("Salut toi, appuie sur une touche s'il te plaît");
  
  getchar(); /* Attend la frappe d'une touche */

  /* Affiche le second message */
  puts ("Merci d'avoir appuyé sur une touche");
  
  return 0;
}

/*
  1) Compile : gcc -o prog_name prog_name.c
  2) Execute : ./prog_name
 */
