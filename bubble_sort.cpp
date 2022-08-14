#include <iostream>

void Bubble_sort(int* arr, int Size);

int main()
{
  const int SIZE = 5;
  int arr[SIZE] = {2, 1, 5, 7, -3};
  Bubble_sort(arr, SIZE);
  for (int i = 0; i < SIZE; ++i)
  {
    std::cout << arr[i] << ", ";
  }
}
void Bubble_sort(int* arr, int Size)
{
  bool flag = true;
  for (int i = 0; i < Size - 1; ++i)
  {
    flag = true;
    for (int j = 0; j < Size - 1; ++j)
    {
      if (arr[j] > arr[j + 1])
      {
        std::swap(arr[j], arr[j + 1]);
        flag = false;
      }
    }
    if (flag)
    {
      return;
    }
  }
}