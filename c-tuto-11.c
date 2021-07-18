#include <stdio.h>
#include <stdlib.h>

int createRandomNumbers();
int readRandomNumbers();

int main()
{

  printf("Do you want to create a random numbers file? 0) No 1) Yes ");
  int randNum = 0;
  scanf("%d", &randNum);
  if (randNum == 1)
  {
    int randNumFile = createRandomNumbers();
    printf("%d", randNumFile);
  }

  printf("Do you want to read a random numbers file? 0) No 1) Yes ");
  randNum = 0;
  scanf("%d", &randNum);
  if (randNum == 1)
  {
    int randNumFile = readRandomNumbers();
    printf("%d", randNumFile);
  }

  char buffer[1000];

  FILE *pFile;

  pFile = fopen("randomwords.txt", "r+");

  if(!pFile)
  {
    printf("Error: Couldn't Write to File\n");
    return 1;
  }

  fputs("Messing With Strings", pFile);

  fseek(pFile, 12, SEEK_SET);

  fputs("  Files  ", pFile);

  fseek(pFile, 0, SEEK_SET);

  fseek(pFile, 0, SEEK_END);

  long numberOfBytes = ftell(pFile);

  printf("Number of Bytes in File: %d\n", numberOfBytes);

  fseek(pFile, -20, SEEK_CUR);
  
  printf("Success Reading to File\n");

  while(fgets(buffer, 1000, pFile) != NULL)
  {
    printf("%s", buffer);
  }

  printf("\n");

  if(fclose(pFile) != 0)
  {
    printf("Error: File Not Closed\n");
  }

   
  
  return 0;
}

int createRandomNumbers()
{
  int randomNumber;

  FILE *pFile;

  pFile = fopen("randomnumbers.txt", "w");

  if(!pFile)
  {
    printf("Error: Couldn't Write to File\n");
    return 1;
  }

  for(int i = 0; i < 10; i++)
  {
    randomNumber = rand() % 100;
    fprintf(pFile, "%d\n", randomNumber);
  }

  printf("Success Writing to File\n");

  if(fclose(pFile) != 0)
  {
    printf("Error: File Not Closed\n");
  }

  return 0;
  
}

int readRandomNumbers()
{
  char buffer[1000];

  FILE *pFile;

  pFile = fopen("randomnumbers.txt", "r");

  if(!pFile)
  {
    printf("Error: Couldn't Write to File\n");
    return 1;
  }

  
  while(fgets(buffer, 1000, pFile) != NULL)
  {
    printf("%s", buffer);
  }
  

  printf("Success Reading to File\n");

  if(fclose(pFile) != 0)
  {
    printf("Error: File Not Closed\n");
  }

   
  
  return 0;
}
