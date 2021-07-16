#include <stdio.h>
#include <stdlib.h>

struct product
{
  float price;
  char productName[30];
};

void numbers();
void dispProd();

int main()
{

  printf("Do you want to play with numbers?\n0)No\n1)Yes\nYour choice: ");
  int choice = 0;
  scanf("%d", &choice);
  if (choice == 1) numbers();

  printf("Do you want to play with products?\n0)No\n1)Yes\nYour choice: ");
  choice = 0;
  scanf("%d", &choice);
  if (choice == 1) dispProd();

  return 0;
}

void numbers()
{
  int amtOfNumbersToStore;

  printf("How many numbers do you want to store: ");

  scanf("%d", &amtOfNumbersToStore);

  int *pRandomNumbers;
  
  pRandomNumbers = (int *) malloc(amtOfNumbersToStore * sizeof(int));

  if(pRandomNumbers != NULL)
  {
    int i = 0;

    printf("Enter a Number or Quit: ");

    while(i < amtOfNumbersToStore && scanf("%d", &pRandomNumbers[i]) == 1)
    {
      printf("Enter a number or Quit: ");
      i++;
    }

    printf("\nYou entered the following numbers\n");

    for(int j = 0; j < i; j++)
    {
      printf("%d\n", pRandomNumbers[j]);
    }
  }

  free(pRandomNumbers);
}

void dispProd()
{
  struct product *pProducts;

  int i, j;

  int numberOfProducts;

  printf("Enter the Number of Products to Store: ");

  scanf("%d", &numberOfProducts);

  pProducts = (struct product *) malloc(numberOfProducts * sizeof(struct product));

  for(i = 0; i < numberOfProducts; ++i)
  {
    printf("Enter a Product Name: ");

    scanf("%s", (pProducts+i)->productName);

    printf("Enter a Product Price: ");

    scanf("%f", &(pProducts+i)->price);
  }

  printf("Products Stored\n");

  for(j=0; j < numberOfProducts; ++j)
  {
    printf("%s\t%.2f\n", (pProducts+j)->productName, (pProducts+j)->price);
  }

  free(pProducts);
}
  
