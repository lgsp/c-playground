#include <stdio.h>

int main()
{

  /*
    gcc ProgramName.c -o ProgramName
    ./ProgramName ./a.out
   */

  int num1 = 1, num2 = 2;

  printf("Is 1 > 2 : %d\n\n", num1 > num2);

  if (num1 > num2) printf("%d is greater then %d\n\n", num1, num2);
  else if (num1 < num2) printf("%d is less then %d\n\n", num1, num2);
  else printf("%d is equal to %d\n\n", num1, num2);

  int custAge = 38;
  if (custAge > 21 && custAge < 35) printf("They are welcome\n\n");
  else printf("They are not welcome\n\n");

  int bobMissedDays = 8, bobTotalSales = 24000, bobNewCust = 32;

  if (bobMissedDays < 10 && bobTotalSales > 3000 || bobNewCust > 30)
    printf("Bob Gets a Raise\n");

  char *legalAge = (custAge > 21) ? "true" : "false";

  printf("Is the customer of legal age? %s\n\n", legalAge);

  int numOfProducts = 10;

  printf("I bought %s products\n\n", (numOfProducts > 1) ? "many" : "one");

  printf("A char takes up %lu bytes\n\n", sizeof(char));
  printf("A int takes up %lu bytes\n\n", sizeof(int));
  printf("A float takes up %lu bytes\n\n", sizeof(float));
  printf("A long int takes up %lu bytes\n\n", sizeof(long int));
  printf("A double takes up %lu bytes\n\n", sizeof(double));

  int maxInt = 2147483647;

  printf("I'm the biggest int %d\n", maxInt);
    
  long int bigInt = 2147483648;

  printf("I'm bigger than you may have heard %ld\n", bigInt);

  int numberHowBig = 0;
  
  printf("\n\n");
  printf("How Many Bits? ");
  scanf(" %d", &numberHowBig);
  printf("\n\n");

  /*
    0 : Print what is given
    1 : Print what is given
    2 : 1 + 2 = 3 => 11
    3 : 3 + 4 = 7 => 111
    4 : 7 + 8 = 15 => 1111
   */

  int myIncrementor = 1, myMultiplier = 1, finalValue = 1;

  while (myIncrementor < numberHowBig)
  {
    myMultiplier *= 2;
    finalValue += myMultiplier;
    myIncrementor++;
  }

  if ((numberHowBig == 0) || (numberHowBig == 1))
    printf("Top Value: %d\n\n", numberHowBig);
  else printf("Top Value: %d\n\n", finalValue);

  int secretNumber = 10, numberGuessed = 0;

  while(1)
  {
    printf("Guess My Secret Number: ");
    scanf(" %d", &numberGuessed);

    if (numberGuessed == secretNumber)
    {
      printf("You Got It\n");
      break;
    }
  }

  char sizeOfShirt;

  do {
    printf("What Size of Shirt (S, M, L): ");
    scanf(" %c", &sizeOfShirt);
  } while (sizeOfShirt != 'S' && sizeOfShirt != 'M' && sizeOfShirt != 'L');


  for (int counter = 0; counter <= 40; counter++)
  {
    if ((counter % 2) == 0) continue;
    printf("%d ", counter);
  }
  printf("\n");
  
  
  return 0;
}
