#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int baseToDecimal(char *number, int baseFrom, int sizeOfNumber);

char *convertBase(unsigned int numberToConvert, int base, char *pConvertedNumber);

int main(void)
{
  
  unsigned int numberSix = 6;
  unsigned int numberSeven = 7;

  char *pConvertedNumber;
  pConvertedNumber = malloc(33 * sizeof(char));

  printf("1) And (&)\n");
  printf("2) Or (|)\n");
  printf("3) Xor (^)\n");
  printf("4) One comp\n");
  printf("5) Shift Left\n");
  printf("6) Shift Right\n");
  printf("7) Analyse bits\n");
  printf("Your choice: ");
  int choice = 0;
  scanf("%d", &choice);

  if(choice == 1)
  {
    unsigned int andSolution = numberSix & numberSeven;

    printf("%s & ", convertBase(numberSix, 2, pConvertedNumber));
    printf("%s = ", convertBase(numberSeven, 2, pConvertedNumber));
    printf("%s\n\n", convertBase(andSolution, 2, pConvertedNumber));
  }
  else if(choice == 2)
  {
    unsigned int orSolution = numberSix | numberSeven;

    printf("%s | ", convertBase(numberSix, 2, pConvertedNumber));
    printf("%s = ", convertBase(numberSeven, 2, pConvertedNumber));
    printf("%s\n\n", convertBase(orSolution, 2, pConvertedNumber));
  }
  else if(choice == 3)
  {
    unsigned int exOrSolution = numberSix ^ numberSeven;

    printf("%s ^ ", convertBase(numberSix, 2, pConvertedNumber));
    printf("%s = ", convertBase(numberSeven, 2, pConvertedNumber));
    printf("%s\n\n", convertBase(exOrSolution, 2, pConvertedNumber));
  }
  else if(choice == 4)
  {
    unsigned int onesCompSolution = ~numberSix;

    printf("~%s = ", convertBase(numberSix, 2, pConvertedNumber));
    printf("%s\n\n", convertBase(onesCompSolution, 2, pConvertedNumber));
    printf("Negative of %d = %d\n\n", numberSix, (onesCompSolution + 1));
  }
  else if(choice == 5)
  {
    unsigned int shiftLeftTwo = numberSix << 2;

    printf("%s << 2 = ", convertBase(numberSix, 2, pConvertedNumber));
    printf("%s = %d\n\n",
	   convertBase(shiftLeftTwo,
		       2,
		       pConvertedNumber),
	   shiftLeftTwo);

  }
  else if(choice == 6)
  {
    unsigned int shiftRightTwo = numberSix >> 2;

    printf("%s >> 2 = ", convertBase(numberSix, 2, pConvertedNumber));
    printf("%s = %d\n\n",
	   convertBase(shiftRightTwo,
		       2,
		       pConvertedNumber),
	   shiftRightTwo);

  }
  else if(choice == 7)
  {
    unsigned int analyzeMyBits = 170;
    unsigned int theMask = 15;
    unsigned int last4Bits = analyzeMyBits & theMask;

    printf("Last 4 Bits : %s\n",
	   convertBase(last4Bits, 2, pConvertedNumber));

  }

  free(pConvertedNumber);
  
  
  
  return 0;
}

char *convertBase(unsigned int numberToConvert, int base, char *pConvertedNumber)
{
  
  char allValues[] = "0123456789abcdef";

  if(base < 2 || base > 16)
  {
    printf("Enter a Number Between 2 and 16\n");
    exit(1);
  }

  pConvertedNumber[32] = '\0';

  do{

    int value = numberToConvert % base;

    pConvertedNumber = pConvertedNumber - 1;

    *pConvertedNumber = allValues[value];

    numberToConvert /= base;
    
  } while(numberToConvert != 0);


  return pConvertedNumber;
  
}


int baseToDecimal(char *number, int baseFrom, int sizeOfNumber)
{
  int result = 0;
  int toThePowerOf = 0;

  for(int i = (sizeOfNumber - 2); i >= 0; --i)
  {
    if(isalpha(number[i]))
    {
      int charCode = ((int)tolower(number[i])) - 87;

      result += charCode * pow(baseFrom, toThePowerOf);
    }
    else
    {
      result += (number[i] - '0') * pow(baseFrom, toThePowerOf);
      
    }

    toThePowerOf++;
  }

  printf("%s in the base %d equals %d in base 10\n",
	 number, baseFrom, result);

  return result;
}
