#include <stdio.h>

// bubble sort
void sort(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1]) // value of left is > value of right we will perform a swap
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d \t", arr[i]);
  }
  printf("\n");
}

int main()
{

  int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 6};
  int size = sizeof(array) / sizeof(array[0]); // size of an array in bytes divid number of 1st element

  sort(array, size);
  printArray(array, size);

  return 0;
}