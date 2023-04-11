

#include <iostream>

int reverseArray(int arr[], int size)
{
    std::cout << "size " << size << std::endl;
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main()
{
    int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    reverseArray(myArray, size);
    for (int i = 0; i < size; i++)
    {
        std::cout << myArray[i] << " ";
    };
}
