#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct product
{
  float price;
  char productName[30];

  struct product *next;
};

struct product *pFirstNode = NULL;
struct product *pLastNode = NULL;
struct product *pProductBeforeProductToDelete = NULL;

void createNewList();
void inputData();
void outputData();
struct product *searchForProduct(char *productName);
void removeProduct(char *productName);

int main()
{
  inputData();
  inputData();
  inputData();

  outputData();

  removeProduct("Tomato");
  searchForProduct("Tomato");

  outputData();
  
  return 0;
}


void createNewList()
{
  struct product *pNewStruct = (struct product *) malloc(sizeof(struct product));

  pNewStruct->next = NULL;

  printf("Enter Product Name: ");
  scanf("%s", pNewStruct->productName);

  printf("Enter Product Price: ");
  scanf("%f", &(pNewStruct)->price);

  pFirstNode = pLastNode = pNewStruct;
  
}

void inputData()
{

  if(pFirstNode == NULL) createNewList();
  else
  {
    struct product *pNewStruct = (struct product *) malloc(sizeof(struct product));

    printf("Enter Product Name: ");
    scanf("%s", pNewStruct->productName);

    printf("Enter Product Price: ");
    scanf("%f", &(pNewStruct)->price);

    if(pFirstNode == pLastNode)
    {
      pFirstNode->next = pNewStruct;

      pLastNode = pNewStruct;

      pNewStruct->next = NULL;
    }
    else
    {
      pLastNode->next = pNewStruct;

      pNewStruct->next = NULL;

      pLastNode = pNewStruct;
    }
  }
  
  
}

void outputData()
{
  struct product *pProducts = pFirstNode;

  printf("Products Entered\n\n");

  while(pProducts != NULL)
  {
    printf("%s costs %.2f\n\n",
	   pProducts->productName,
	   pProducts->price);

    pProducts = pProducts->next;
  }
}

struct product *searchForProduct(char *productName)
{
  struct product *pProductIterator = pFirstNode;

  while(pProductIterator != NULL)
  {
    int areTheyEqual = strncmp(pProductIterator->productName,
			       productName, 30);

    if(!areTheyEqual)
    {
      printf("%s was found and it costs %.2f\n\n",
	     pProductIterator->productName,
	     pProductIterator->price);

      return pProductIterator;
    }

    pProductIterator = pProductIterator->next;
      
  }

  pProductBeforeProductToDelete = pProductIterator;

  printf("%s Wasn't Found\n\n", productName);

  return NULL;
}

void removeProduct(char *productName)
{
  struct product *pProductToDelete = NULL;

  pProductToDelete = searchForProduct(productName);

  if(pProductToDelete != NULL)
  {
    printf("%s Was Deleted\n\n", productName);

    if(pProductToDelete == pFirstNode)
    {
      pFirstNode = pProductToDelete->next;
    }
    else
    {
      pProductBeforeProductToDelete->next = pProductToDelete->next;
    }

    free(pProductToDelete);
  }
  else
  {
    printf("%s Was Not Found\n", productName);
  }
}
