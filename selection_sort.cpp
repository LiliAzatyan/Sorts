#include <iostream>

void Selection_sort(int*, int);
void Print_array(int*, int);

int main()
{
  const int SIZE = 5;
  int arr[SIZE] = {5, 4, 8, 1, -8};
  Selection_sort(arr, SIZE); 
  Print_array(arr, SIZE);
  return 0;
}

void Selection_sort(int* arr, int size)
{
  int i = 0;
  int j = i + 1;
  int first;
  int tmp;
  for (int i = 0; i < size; ++i)
  {
    first = i;
    for (int j = i + 1; j < size; ++j)
    {
      if (arr[j] < arr[first])
      {
        first = j;
        tmp = arr[i];
        arr[i] = arr[first];
        arr[first] = tmp;
      }
    }
  }
}

void Print_array(int* arr, int size)
{
  for (int i = 0; i < size; ++i)
  {
    std::cout << arr[i] << ", ";
  }
}