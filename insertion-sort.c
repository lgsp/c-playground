#include <stdio.h>

void insertionSort(int *tab, int size);

int main()
{
  int tab[] = {1, 9, 8, 2, 7, 6, 3, 5, 4, 0};
  int size = sizeof(tab) / sizeof(tab[0]);

  printf("Initial table:\n");
  for (int i = 0; i < size; i++)
    printf("%d%s", tab[i], i == size - 1 ? "\n" : " ");
  insertionSort(tab, size);
  printf("Sorted table:\n");
  for (int i = 0; i < size; i++)
    printf("%d%s", tab[i], i == size - 1 ? "\n" : " ");

  return 0;
}

void insertionSort(int *tab, int size)
{
  for (int i = 1; i < size; ++i)
  {
    int tmp = tab[i];
    int j = i;
    while (j > 0 && tmp < tab[j - 1])
    {
      tab[j] = tab[j - 1];
      --j;
    }
    tab[j] = tmp;
  }
}
