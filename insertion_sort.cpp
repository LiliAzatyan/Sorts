#include <iostream>

void InsertionSort(int*, int);
void PrintArray(int*, int);

int main()
{
    const int size = 5;
    int arr[size] = {5, 2, 1, 3, 4};
    InsertionSort(arr, size);
    PrintArray(arr, size);
    return 0;
}
void InsertionSort(int* arr, int size)
{
    int i;
    int j;
    int key;
    for (i = 1; i < size; ++i)
    {
        j = i - 1;
        key = arr[i];
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}
void PrintArray(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << ", ";
    }
}