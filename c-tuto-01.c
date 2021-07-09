/*
  Multiline 
  Comment
 */

// Single line comment

#include <stdio.h>
#include <string.h>

#define MYNAME "Laurent Garnier"

int globalVar = 100;



int main()
{

  char firstLetter = 'A';

  printf("The first letter in the alphabet is: '%c'\n\n", firstLetter);

  int age = 38;

  printf("I am %d years old\n\n", age);

  long int superBigNum = -123456789;

  printf("I am super Big Num: %ld\n\n", superBigNum);

  float piValue = 3.14159;

  printf("Here is a 5-digits approximation of π = %.5f\n\n", piValue);

  double reallyBigPi = 3.141592653589793;

  printf("Here is a 15-digits approximation of π = %.15f\n\n", reallyBigPi);

  printf("\n");

  printf("This will print to screen\n\n");

  printf("My name is: %s\n\n", MYNAME);

  char myFullName[16] = MYNAME; // 14 letters + 1 space + \0

  printf("Once again: %s\n\n", myFullName);

  strcpy(myFullName, "John Doe");

  printf("My (new) name is: %s\n\n", myFullName);

  char cryptoInitial;
  
  printf("What is the initial of your favorite crypto? ");

  scanf("%c", &cryptoInitial);

  printf("The initial of your favorite crypto is: '%c'\n\n", cryptoInitial);

  char firstName[30], lastName[30];

  printf("What is your name? ");

  scanf(" %s %s", firstName, lastName);

  printf("Your Name is %s %s\n\n", firstName, lastName);

  char crypto[20], ticker[5];
  double price;
  printf("Wat's your favorite crypto?\nType: Crypto Ticker Price\n");
  scanf(" %s %s %lf", crypto, ticker, &price);
  printf("Your favorite crypto is %s.\n", crypto);
  printf("Its ticker is: %s\n", ticker);
  printf("And its price is: %.2f\n", price);

  printf("\n==========================\n\n");
  int year, month, day;

  printf("Birth date? (YYYY/MM/DD) ");

  scanf(" %d/%d/%d", &year, &month, &day);

  printf("%s's birth date was: %d/%d/%d\n", crypto, year, month, day);

  float cryptoAmount;
  printf("How many %ss do you have? ", crypto);
  scanf(" %f", &cryptoAmount);
  printf("You have %.2f %s = $%.2f\n\n",
	 cryptoAmount, ticker, price * cryptoAmount);

  int randomNum = 1;

  printf("1 += 2 : %d\n\n", randomNum += 2);

  //printf("%d += 2 : %d\n\n", randomNum, randomNum += 2);

  int exNum = 1;

  printf("++%d : %d\n\n", exNum, exNum);

  exNum = 1;

  printf("%d++ : %d\n\n", exNum, exNum);
  
  
  return 0;
}
