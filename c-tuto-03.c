#include <stdio.h>

// Needed for exit()
#include <stdlib.h>

#include <string.h>

void doWhile();

int globalVar = 0;

int main()
{
  char name[17];
  printf("What's your name? ");
  fgets(name, 30, stdin);
  printf("Hello %s\n\n", name);

  printf("\n");

  char wholeName[17] = "Satoshi Nakamoto";

  int primeNumbers[3] = {2, 3, 5};

  int morePrimes[] = {13, 17, 19, 23};

  printf("The first prime in the list is %d\n\n", primeNumbers[0]);

  char city[7] = {'C', 'h', 'i', '\0'};

  char thirdCity[] = "Paris";


  char yourCity[30];

  printf("What city do you live in? ");

  fgets(yourCity, 30, stdin);

  printf("Hello %s\n\n", yourCity);
  

  for (int i = 0; i < 30; i++)
  {
    if (yourCity[i] == '\n')
    {
      yourCity[i] = '\0';
      break;
    }
  }

  printf("Hello %s\n\n", yourCity);

  printf("Is your city Paris? %d\n\n",
	 strcmp(yourCity, thirdCity));

  char yourState[] = ", Pensylvania";

  strcat(yourCity, yourState);

  printf("You live in %s\n\n", yourCity);

  printf("Letters in Paris: %lu\n\n", strlen(thirdCity));

  strlcpy(yourCity,
	  "El Pueblo del la Reina de Los Angeles",
	  sizeof(yourCity));

  printf("New City is %s\n\n", yourCity);

  doWhile();
  
  return 0;
}

void doWhile()
{
  int doWhileOrNot = 0;
  printf("Do you want to try do while? 0) No 1) Yes ");
  scanf(" %d", &doWhileOrNot);

  if (doWhileOrNot == 1)
  {
    int whatToDo;
    printf("First do while\n");
    do{
      printf("\n");
      printf("1. What time is it?\n");
      printf("2. What is todays date?\n");
      printf("3. What day is it?\n");
      printf("4. Quit\n");

      scanf(" %d", &whatToDo);
    } while(whatToDo < 1 || whatToDo > 4);

    if(whatToDo == 1) printf("Print the time\n");
    else if(whatToDo == 2) printf("Print the date\n");
    else if(whatToDo == 3) printf("Print the day\n");
    else
    {
      printf("Bye Bye\n");
      exit(0);
    }

    printf("Second do while\n");
    do{
      printf("\n");
      printf("1. What time is it?\n");
      printf("2. What is todays date?\n");
      printf("3. What day is it?\n");
      printf("4. Quit\n");

      scanf(" %d", &whatToDo);
    } while(whatToDo < 1 || whatToDo > 4);

    switch(whatToDo)
    {
    case(1): printf("Print the time\n");
      break;

    case(2): printf("Print the date\n");
      break;

    case(3): printf("Print the day\n");
      break;

    default: printf("Bye\n");
      exit(0);
      break;
    }
  }
}
