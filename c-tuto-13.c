#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *convertBase(unsigned int numberToConvert, int base);

int main(void)
{

  unsigned int numberOne = 60;

  printf("%d in Base 2 =  ", numberOne);
  convertBase(numberOne, 2);
  printf("\n");

  printf("%d in Base 8 =  ", numberOne);
  convertBase(numberOne, 8);
  printf("\n");

  printf("%d in Base 16 =  ", numberOne);
  convertBase(numberOne, 16);
  printf("\n");
    
  return 0;
}

char *convertBase(unsigned int numberToConvert, int base)
{
  char buffer[33];
  char *pConvertedNumber;

  char allValues[] = "0123456789abcdef";

  if(base < 2 || base > 16)
  {
    printf("Enter a Number Between 2 and 16\n");
    exit(1);
  }

  pConvertedNumber = &buffer[sizeof(buffer) - 1];

  *pConvertedNumber = '\0';

  do{

    int value = numberToConvert % base;

    pConvertedNumber = pConvertedNumber - 1;

    *pConvertedNumber = allValues[value];

    numberToConvert /= base;
    
  } while(numberToConvert != 0);

  printf("%s", pConvertedNumber);

  return pConvertedNumber;
  
}
