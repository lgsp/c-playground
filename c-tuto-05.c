#include <stdio.h>

struct dogsFavs
{
  char *food;
  char *friend;
};
  
typedef struct dog
{
  const char *name;
  const char *breed;
  int avgHeightCm;
  int avgWeightLbs;

  struct dogsFavs favoriteThings;
} dog;

void getDogInfo(struct dog theDog);
void getMemoryLocations(struct dog theDog);
void getDogsFavs(dog theDog);
void setDogWeight(dog theDog, int newWeight);
void setDogWeightPtr(dog *theDog, int newWeight);
		
int main()
{

  struct dog cujo = {
    "Cujo",
    "Saint Bernard",
    90,
    264,
    {"Meat", "Joe Camp"}
  };

  getDogInfo(cujo);

  struct dog cujo2 = cujo;

  printf("cujo\n");
  getMemoryLocations(cujo);

  printf("\n-------------------\n\n");

  printf("cujo2\n");
  getMemoryLocations(cujo2);

  printf("\n-------------------\n\n");

  dog benji = {
    "Benji",
    "Silky Terrier",
    25,
    9,
    {"Meat", "Joe Camp"}
  };

  getDogsFavs(benji);

  setDogWeight(benji, 11);

  printf("The Weight in Main() %d\n\n", benji.avgWeightLbs);

  printf("Pointer function\n");
  setDogWeightPtr(&benji, 11);

  printf("The Weight in Main() After Pointer function %d\n\n",
	 benji.avgWeightLbs);
  
  return 0;
}

void getDogInfo(struct dog theDog)
{
  printf("\n");

  printf("Name: %s\n\n", theDog.name);
  printf("Breed: %s\n\n", theDog.breed);
  printf("Avg Height: %d cms\n\n", theDog.avgHeightCm);
  printf("Avg Weight: %d lbs\n\n", theDog.avgWeightLbs);
}

void getMemoryLocations(struct dog theDog)
{
  printf("Name Location: %p\n\n", theDog.name);
  printf("Breed Location: %p\n\n", theDog.breed);
  printf("Height Location: %p\n\n", &theDog.avgHeightCm);
  printf("Weight Location: %p\n\n", &theDog.avgWeightLbs);
}

void getDogsFavs(dog theDog)
{
  printf("\n");

  printf("%s loves %s and his friend is %s\n\n",
	 theDog.name,
	 theDog.favoriteThings.food,
	 theDog.favoriteThings.friend);
}


void setDogWeight(dog theDog, int newWeight)
{
  theDog.avgWeightLbs = newWeight;

  printf("The weight was changed to %d\n\n", theDog.avgWeightLbs);
}

void setDogWeightPtr(dog *theDog, int newWeight)
{
  printf("Pointer's notations: (*theDog).avgWeightLbs\n");
  (*theDog).avgWeightLbs = newWeight;

  printf("The weight was changed to %d\n\n", (*theDog).avgWeightLbs);

  printf("Arrow's notations: theDog->avgWeightLbs\n");
  theDog->avgWeightLbs = newWeight;

  printf("The weight was changed to %d\n\n", theDog->avgWeightLbs);
}
