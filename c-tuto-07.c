#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int doYouWant(char *msg, int *choice);
void isANumber();
void theChar();
void firstName();
void lastName();
void randString();
void quit();
void noMoreNewline(char *theString);
void makeLowercase(char *theString);
void getCharInfo();
void menu();

int main()
{

  while (1)
  {
    menu();
    printf("Your choice: ");
    int choice = 0;
    scanf("%d", &choice);
    if (choice == 1)
    {
      choice = 0;
      int num = doYouWant("add numbers ", &choice);
      if (num == 1) isANumber();
    }
    else if (choice == 2)
    {
      choice = 0;
      int dispChar = doYouWant("display characters ", &choice);
      if (dispChar == 1) theChar();
    }
    else if (choice == 3)
    {
      choice = 0;
      int dispFN = doYouWant("display first name ", &choice);
      if (dispFN == 1) firstName();
    }
    else if (choice == 4)
    {
      choice = 0;
      int dispLN = doYouWant("display last name ", &choice);
      if (dispLN == 1) lastName();
    }
    else if (choice == 5)
    {
      choice = 0;
      int dispRS = doYouWant("display a random string ", &choice);
      if (dispRS == 1) randString();
    }
    else if (choice == 6)
    {
      choice = 0;
      int dispQuit = doYouWant("quit ", &choice);
      if (dispQuit == 1) quit();
    }
    else if (choice == 7) break;
  }
  
  return 0;
}


int doYouWant(char *msg, int *choice)
{
  printf("Do you want to %s 0) No 1) Yes ", msg);
  scanf("%d", choice);
  return *choice;
}

void isANumber()
{
  _Bool isANumber;

  int number;
  int sumOfNumbers = 0;

  printf("Enter a Number: ");

  isANumber = (scanf("%d", &number) == 1);

  while(isANumber)
  {
    sumOfNumbers += number;

    printf("Enter a Number: ");

    isANumber = (scanf("%d", &number) == 1);
  }

  printf("The Sum is %d\n\n", sumOfNumbers);
}

void theChar()
{
  printf("Type '~' to stop.\n");
  char theChar;

  while((theChar = getchar()) != '~')
  {
    putchar(theChar);   
  }
}

void firstName()
{
  char first_name[50];

  printf("What is your first name? ");

  gets(first_name);

  puts("Hi");
  puts(first_name);
}

void lastName()
{
  char last_name[50];

  printf("What is your last name? ");

  fgets(last_name, 50, stdin);

  fputs("Hi ", stdout);
  fputs(last_name, stdout);
}

void randString()
{
  char *randomString = "Just some random stuff";

  while(*randomString)
  {
    putchar(*randomString++);
  }

  int i = 0;

  while(randomString[i] != '\0')
  {
    putchar(randomString[i++]); 
  }
}

void quit()
{
  char doYouWantToQuit[10];

  printf("Enter quit to quit: ");

  fgets(doYouWantToQuit, 10, stdin);

  noMoreNewline(doYouWantToQuit);

  makeLowercase(doYouWantToQuit);

  printf("%s\n", doYouWantToQuit);

  while(strcmp(doYouWantToQuit, "quit"))
  {
    printf("Enter quit to quit: ");

    fgets(doYouWantToQuit, 10, stdin);

    noMoreNewline(doYouWantToQuit);

    makeLowercase(doYouWantToQuit);
  }

  printf("Thank you for typing %s\n\n", doYouWantToQuit);
}

void noMoreNewline(char *theString)
{
  char *isANewline;

  isANewline = strrchr(theString, '\n');

  if(isANewline) *isANewline = '\0';
    
}

void makeLowercase(char *theString)
{
  int i = 0;

  while(theString[i])
  {
    theString[i] = tolower(theString[i]);
    i++;
  }
}

void getCharInfo()
{
  char theChar;

  while((theChar = getchar()) != '\n')
  {
    printf("Letter or Number %d\n\n", isalnum(theChar));

    printf("Alphabetic Char %d\n\n", isalpha(theChar));

    printf("Standard Blank %d\n\n", isblank(theChar));

    printf("Ctrl Char %d\n\n", iscntrl(theChar));

    printf("Number Char %d\n\n", isdigit(theChar));

    printf("Anything But Space %d\n\n", isgraph(theChar));

    printf("Lowercase %d\n\n", islower(theChar));

    printf("Uppercase %d\n\n", isupper(theChar));

    printf("Punctuation %d\n\n", ispunct(theChar));

    printf("Any Space %d\n\n", isspace(theChar));
    
  }
}

void menu()
{
  printf("===========================================================\n");
  printf("\n");
  printf("        ========          MENU          ========        \n");
  printf("\n");
  printf("===========================================================\n");
  printf("\n");
  printf("1) Number\n");
  printf("2) Characters\n");
  printf("3) First Name\n");
  printf("4) Last Name\n");
  printf("5) Random String\n");
  printf("6) Quit\n");
  printf("7) Finish\n");
}
