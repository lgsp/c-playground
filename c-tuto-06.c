#include <stdio.h>

typedef struct product
{
  const char *name;
  float price;

  struct product *next;
  
} product;

void printLinkedList(product *pProduct);

int main()
{
  typedef union
  {
    short individual;
    float pound;
    float ounce;
  } amount;

  amount orangeAmt = {.ounce = 16};

  orangeAmt.individual = 4;

  printf("Orange Juice Amount: %.2f : Size: %lu\n\n",
	 orangeAmt.ounce,
	 sizeof(orangeAmt.ounce));

  printf("Number of Oranges: %d : Size: %lu\n\n",
	 orangeAmt.individual,
	 sizeof(orangeAmt.individual));

  orangeAmt.pound = 1.5;

  printf("Orange Juice Amount: %.2f : Size: %lu\n\n",
	 orangeAmt.pound,
	 sizeof(orangeAmt.pound));

  typedef struct
  {
    char *brand;
    amount theAmount;
  } orangeProduct;

  orangeProduct productOrdered = {"Chiquita", .theAmount.ounce = 16};

  printf("You bought %.2f ounces of %s oranges\n\n",
	 productOrdered.theAmount.ounce,
	 productOrdered.brand);

  typedef enum {INDIV, OUNCE, POUND} quantity;

  quantity quantityType = INDIV;

  orangeAmt.individual = 4;

  if (quantityType == INDIV)
  {
    printf("You bought %d oranges\n\n",
	   orangeAmt.individual);
  }
  else if (quantityType == OUNCE)
  {
    printf("You bought %.2f ounces of oranges\n\n",
	   orangeAmt.ounce);
  }
  else
  {
    printf("You bought %.2f pounds of oranges\n\n",
	   orangeAmt.pound);
  }

  product tomato = {"Tomato", .51, NULL};
  product potato = {"Potato", 1.21, NULL};
  product lemon = {"Lemon", 1.69, NULL};
  product milk = {"Milk", 3.09, NULL};
  product turkey = {"Turkey", 1.86, NULL};

  tomato.next = &potato;
  potato.next = &lemon;
  lemon.next = &milk;
  milk.next = &turkey;

  product apple = {"Apple", 1.58, NULL};

  lemon.next = &apple;
  apple.next = &milk;

  printLinkedList(&tomato);

  
  
  return 0;
}


void printLinkedList(product *pProduct)
{
  while (pProduct != NULL)
  {
    printf("A %s costs %.2f\n\n",
	   (*pProduct).name,
	   pProduct->price);

    pProduct = pProduct->next;
  }
}
