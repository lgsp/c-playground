#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


void test1();

  
int main(void)
{

  printf("Do you want to run test1? 0) No 1) Yes ");
  int test_1 = 0;
  scanf("%d", &test_1);
  if (test_1 == 1) test1();
  
  FILE *pFile;

  pFile = fopen("randomnums.bin", "rb+");

  if(pFile == NULL)
  {
    perror("Error Occured");
    printf("Error Code: %d\n", errno);

    printf("File Being Created\n\n");

    pFile = fopen("randomnums.bin", "wb+");

    if(pFile == NULL)
    {
      perror("Error Occured");
      printf("Error Code: %d\n", errno);
      exit(1);
    }
  }

  int randomNumbers[20];

  for(int i = 0; i < 20; i++)
  {
    randomNumbers[i] = rand() % 100;
    printf("Number %d is %d\n", i, randomNumbers[i]);
  }

  fwrite(randomNumbers, sizeof(int), 20, pFile);

  long randomIndexNumber;
  int numberAtIndex;

  printf("Which Random Number do you Want? ");

  scanf("%ld", &randomIndexNumber);

  fseek(pFile, randomIndexNumber * sizeof(int),  SEEK_SET);

  fread(&numberAtIndex, sizeof(int), 1, pFile);

  printf("The Random Number at Index %ld is %d\n",
	 randomIndexNumber, numberAtIndex);

  fclose(pFile);

  
  return 0;
}

void test1()
{
  FILE *pFile;

  char *buffer;

  size_t dataInFile;

  long fileSize;

  pFile = fopen("randomnums.bin", "rb+");

  if(pFile == NULL)
  {
    perror("Error Occured");
    printf("Error Code: %d\n", errno);

    printf("File Being Created\n\n");

    pFile = fopen("randomnums.bin", "wb+");

    if(pFile == NULL)
    {
      perror("Error Occured");
      printf("Error Code: %d\n", errno);
      exit(1);
    }
  }

  char name[] = "Laurent Garnier";

  fwrite(name, sizeof(name[0]), sizeof(name)/sizeof(name[0]),pFile);

  fseek(pFile, 0, SEEK_END);
  fileSize = ftell(pFile);

  rewind(pFile);

  buffer = (char*) malloc(sizeof(char)*fileSize);

  if(buffer == NULL)
  {
    perror("Error Occured");
    printf("Error Code: %d\n", errno);
    exit(2);
  }

  dataInFile = fread(buffer, 1, fileSize, pFile);

  if(dataInFile != fileSize)
  {
    perror("Error Occured");
    printf("Error Code: %d\n", errno);
    exit(3);
  }

  int randomNumbers[20];

  for(int i = 0; i < 20; i++)
  {
    randomNumbers[i] = rand() % 100;
    printf("Number %d is %d\n", i, randomNumbers[i]);
  }

  fwrite(randomNumbers, sizeof(int), 20, pFile);

  long randomIndexNumber;
  int numberAtIndex;

  printf("Which Random Number do you Want? ");

  scanf("%ld", &randomIndexNumber);

  fseek(pFile, randomIndexNumber * sizeof(int), SEEK_SET);

  fread(&numberAtIndex, sizeof(int), 1, pFile);

  printf("The Random Number at Index %ld is %d\n",
	 randomIndexNumber, numberAtIndex);

  fclose(pFile);
}
