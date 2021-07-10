#include <stdio.h>
#include <stdlib.h>

void generateTwoRandomNums(int rand1, int rand2);
void pointerRandomNumbers(int *rand1, int *rand2);
void editMessageSent(char *message, int size);

int main()
{

  int rand1 = 12, rand2 = 15;

  printf("rand1 = %p : rand2 = %p\n\n", &rand1, &rand2);

  //printf("rand1 = %d : rand2 = %d\n\n", &rand1, &rand2);

  printf("Size of int %lu\n\n", sizeof(rand1));

  int *pRand1 = &rand1;

  printf("pRand1 = %p : *pRand1 = %d : &pRand1 = %p\n\n",
	 pRand1, *pRand1, &pRand1);

  int primeNumbers[] = {2, 3, 5, 7};

  printf("First index : primeNumbers[0] = %d\n\n", primeNumbers[0]);

  printf("First index : *primeNumbers = %d\n\n", *primeNumbers);

  printf("Second index : primeNumbers[1] = %d\n\n", primeNumbers[1]);

  printf("Second index : *(primeNumbers+1) = %d\n\n", *(primeNumbers+1));

  char *students[4] = {"Sally", "Mark", "Paul", "Sue"};

  for (int i = 0; i < 4; i++)
    printf("%s : %p\n\n", students[i], &students[i]);

  printf("Main Before generateTwoRandomNums(rand1, rand2) Call\n\n");

  printf("rand1 = %d\n\n", rand1);

  printf("rand2 = %d\n\n", rand2);

  generateTwoRandomNums(rand1, rand2);

  printf("Main After generateTwoRandomNums(rand1, rand2) Call\n\n");

  printf("rand1 = %d\n\n", rand1);

  printf("rand2 = %d\n\n", rand2);

  pointerRandomNumbers(&rand1, &rand2);

  printf("Main After pointerRandomNumbers(&rand1, &rand2) Call\n\n");

  printf("rand1 = %d\n\n", rand1);

  printf("rand2 = %d\n\n", rand2);

  char randomMessage[] = "Edit my function";

  printf("Old Message: %s\n\n", randomMessage);

  editMessageSent(randomMessage, sizeof(randomMessage));

  printf("New Message: %s\n\n", randomMessage);
  
  return 0;
}


void generateTwoRandomNums(int rand1, int rand2)
{
  rand1 = rand() % 10 + 1;
  rand2 = rand() % 10 + 1;

  printf("New rand1 in function = %d\n\n", rand1);

  printf("New rand2 in function = %d\n\n", rand2);
}

void pointerRandomNumbers(int *rand1, int *rand2)
{
  *rand1 = rand() % 100 + 1;
  *rand2 = rand() % 100 + 1;

  printf("New rand1 in function = %d\n\n", *rand1);

  printf("New rand2 in function = %d\n\n", *rand2);
}

void editMessageSent(char *message, int size)
{
  char newMessage[] = "New Message";

  if(size > sizeof(newMessage))
  {
    for (int i = 0; i < sizeof(newMessage); i++)
      message[i] = newMessage[i];
  }
  else printf("New Message is to big\n\n");
}
